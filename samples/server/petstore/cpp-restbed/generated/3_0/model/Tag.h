/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Tag.h
 *
 * 
 */

#ifndef Tag_H_
#define Tag_H_



#include <string>
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Tag 
{
public:
    Tag() = default;
    explicit Tag(boost::property_tree::ptree const& pt);
    virtual ~Tag() = default;

    Tag(const Tag& other) = default; // copy constructor
    Tag(Tag&& other) noexcept = default; // move constructor

    Tag& operator=(const Tag& other) = default; // copy assignment
    Tag& operator=(Tag&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// Tag members

    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);

protected:
    int64_t m_Id = 0L;
    std::string m_Name = "";
};

std::vector<Tag> createTagVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<Tag>(const Tag& val) {
    return val.toPropertyTree();
}

template<>
inline Tag fromPt<Tag>(const boost::property_tree::ptree& pt) {
    Tag ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* Tag_H_ */
