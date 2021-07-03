#include <gtest/gtest.h>
#include "hash_table_1.hpp"

TEST(hash_table, add)
{
    auto ht = HashTable_1(10);
    ht.add("Hunter Ward", "+1-801-226-9936", "49075 Brekke Turnpike Lake Drew, MN");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Hunter Ward"}), std::string{"+1-801-226-9936"});
    ht.add("Cooper Roberts", "+1-643-392-7761", "33590 Candido Garden Suite 413 North Tremayne, DE");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Cooper Roberts"}), std::string{"+1-643-392-7761"});
    ht.add("Natalia Newman", "+1-370-656-1164", "5540 Eleazar Pine Apt. 785 Morissetteshire, OH");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Natalia Newman"}), std::string{"+1-370-656-1164"});
    ht.add("Joel Jones", "+1-793-714-0302", "62373 Eduardo Square Lake Aglaeville, DE");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Joel Jones"}), std::string{"+1-793-714-0302"});
    ht.add("Daniella Mitchell", "+1 (236) 770-5998", "349 Nella Spurs Port Americoshire, IA");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Daniella Mitchell"}), std::string{"+1 (236) 770-5998"});
    ht.add("Haisley Patel", "+1 (970) 782-3691", "9614 Ali Inlet Goldnerton, CT");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Haisley Patel"}), std::string{"+1 (970) 782-3691"});
    ht.add("Michael Thomas ", "+1-315-782-5265", "430 Witting Shoal South Dimitriberg, VT");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Michael Thomas "}), std::string{"+1-315-782-5265"});
    ht.add("Kennedy Peterson", "+1-756-997-5823", "81522 Balistreri Ridges East Stephonberg, TX");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Kennedy Peterson"}), std::string{"+1-756-997-5823"});
    ht.add("Reagan Hamilton", "+1-831-642-6710", "69894 Hammes Well Suite 100 West Mattview, IA");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Reagan Hamilton"}), std::string{"+1-831-642-6710"});
    ht.add("Johan Webster", "+1-550-758-4054", "435 Gislason Orchard Grantmouth, MI");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Johan Webster"}), std::string{"+1-550-758-4054"});
    ht.add("Lila Larson", "+1 (229) 504-2320", "6202 Alexys Rue West Golden, MS");
    GTEST_ASSERT_EQ(ht.get_phone(std::string{"Lila Larson"}), std::string{"+1 (229) 504-2320"});
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}