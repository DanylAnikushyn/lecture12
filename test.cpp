#include <gtest/gtest.h>
#include "hash_table_1.hpp"

TEST(hash_table, hash_table)
{
    auto ht = HashTable_1(10);

    ht.add("Hunter Ward", "+1-801-226-9936", "49075 Brekke Turnpike Lake Drew, MN");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Hunter Ward"}), std::string{"+1-801-226-9936"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Hunter Ward"}), std::string{"49075 Brekke Turnpike Lake Drew, MN"});
    
    ht.add("Cooper Roberts", "+1-643-392-7761", "33590 Candido Garden Suite 413 North Tremayne, DE");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Cooper Roberts"}), std::string{"+1-643-392-7761"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Cooper Roberts"}), std::string{"33590 Candido Garden Suite 413 North Tremayne, DE"});
    
    ht.add("Natalia Newman", "+1-370-656-1164", "5540 Eleazar Pine Apt. 785 Morissetteshire, OH");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Natalia Newman"}), std::string{"+1-370-656-1164"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Natalia Newman"}), std::string{"5540 Eleazar Pine Apt. 785 Morissetteshire, OH"});
    
    ht.add("Joel Jones", "+1-793-714-0302", "62373 Eduardo Square Lake Aglaeville, DE");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Joel Jones"}), std::string{"+1-793-714-0302"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Joel Jones"}), std::string{ "62373 Eduardo Square Lake Aglaeville, DE"});
    
    ht.add("Daniella Mitchell", "+1 (236) 770-5998", "349 Nella Spurs Port Americoshire, IA");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Daniella Mitchell"}), std::string{"+1 (236) 770-5998"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Daniella Mitchell"}), std::string{"349 Nella Spurs Port Americoshire, IA"});
    
    ht.add("Haisley Patel", "+1 (970) 782-3691", "9614 Ali Inlet Goldnerton, CT");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Haisley Patel"}), std::string{"+1 (970) 782-3691"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Haisley Patel"}), std::string{"9614 Ali Inlet Goldnerton, CT"});
    
    ht.add("Michael Thomas", "+1-315-782-5265", "430 Witting Shoal South Dimitriberg, VT");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Michael Thomas"}), std::string{"+1-315-782-5265"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Michael Thomas"}), std::string{"430 Witting Shoal South Dimitriberg, VT"});
    
    ht.add("Kennedy Peterson", "+1-756-997-5823", "81522 Balistreri Ridges East Stephonberg, TX");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Kennedy Peterson"}), std::string{"+1-756-997-5823"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Kennedy Peterson"}), std::string{"81522 Balistreri Ridges East Stephonberg, TX"});
    
    ht.add("Reagan Hamilton", "+1-831-642-6710", "69894 Hammes Well Suite 100 West Mattview, IA");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Reagan Hamilton"}), std::string{"+1-831-642-6710"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Reagan Hamilton"}), std::string{"69894 Hammes Well Suite 100 West Mattview, IA"});
    
    ht.add("Johan Webster", "+1-550-758-4054", "435 Gislason Orchard Grantmouth, MI");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Johan Webster"}), std::string{"+1-550-758-4054"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Johan Webster"}), std::string{"435 Gislason Orchard Grantmouth, MI"});
    
    ht.add("Lila Larson", "+1 (229) 504-2320", "6202 Alexys Rue West Golden, MS");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Lila Larson"}), std::string{"+1 (229) 504-2320"});
    GTEST_ASSERT_EQ(ht.get_address(std::string{"Lila Larson"}), std::string{"6202 Alexys Rue West Golden, MS"});

    // testing get_name
    GTEST_ASSERT_EQ(ht.get_name(std::string{"+1-550-758-4054"}), std::string{"Johan Webster"});
    GTEST_ASSERT_EQ(ht.get_name(std::string{"+1 (229) 504-2320"}), std::string{"Lila Larson"});
    GTEST_ASSERT_EQ(ht.get_name(std::string{"+1-831-642-6710"}), std::string{"Reagan Hamilton"});
    GTEST_ASSERT_EQ(ht.get_name(std::string{"+1-756-997-5823"}), std::string{"Kennedy Peterson"});
    GTEST_ASSERT_EQ(ht.get_name(std::string{"+1 (970) 782-3691"}), std::string{"Haisley Patel"});

    ht.remove("Lila Larson");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Lila Larson"}), std::string{""});
    std::cout << "Johan Webster" << std::endl;
    ht.remove("Johan Webster");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Johan Webster"}), std::string{""});
    std::cout << "Reagan Hamilton" << std::endl;
    ht.remove("Reagan Hamilton");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Reagan Hamilton"}), std::string{""});
    std::cout << "Johan Webster" << std::endl;
    ht.remove("Johan Webster");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Johan Webster"}), std::string{""});
    std::cout << "Kennedy Peterson" << std::endl;
    ht.remove("Kennedy Peterson");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Kennedy Peterson"}), std::string{""});
    std::cout << "Michael Thomas" << std::endl;
    ht.remove("Michael Thomas");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Michael Thomas"}), std::string{""});
    std::cout << "Haisley Patel" << std::endl;
    ht.remove("Haisley Patel");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Haisley Patel"}), std::string{""});
    std::cout << "Daniella Mitchell" << std::endl;
    ht.remove("Daniella Mitchell");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Daniella Mitchell"}), std::string{""});
    std::cout << "Joel Jones" << std::endl;
    ht.remove("Joel Jones");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Joel Jones"}), std::string{""});
    std::cout << "Natalia Newman" << std::endl;
    ht.remove("Natalia Newman");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Natalia Newman"}), std::string{""});
    std::cout << "Cooper Roberts" << std::endl;
    ht.remove("Cooper Roberts");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Cooper Roberts"}), std::string{""});
    std::cout << "Hunter Ward" << std::endl;
    ht.remove("Hunter Ward");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Hunter Ward"}), std::string{""});

    ht.remove("Lila Lars");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Lila Larson"}), std::string{""});
    
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Lila Lars"}), std::string{""});
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}