/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyEntry.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyAssociation.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Route reception policy. when CCN or other services add routes to a VPC custom route table, you can drop or enable appropriate route entries.
                */
                class RoutePolicy : public AbstractModel
                {
                public:
                    RoutePolicy();
                    ~RoutePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the routing policy.

Note: This field may return null, indicating that no valid value was found.
                     * @return RoutePolicyId Unique ID of the routing policy.

Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRoutePolicyId() const;

                    /**
                     * 设置Unique ID of the routing policy.

Note: This field may return null, indicating that no valid value was found.
                     * @param _routePolicyId Unique ID of the routing policy.

Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRoutePolicyId(const std::string& _routePolicyId);

                    /**
                     * 判断参数 RoutePolicyId 是否已赋值
                     * @return RoutePolicyId 是否已赋值
                     * 
                     */
                    bool RoutePolicyIdHasBeenSet() const;

                    /**
                     * 获取Specifies the routing strategy name.
Note: This field may return null, indicating that no valid value was found.
                     * @return RoutePolicyName Specifies the routing strategy name.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRoutePolicyName() const;

                    /**
                     * 设置Specifies the routing strategy name.
Note: This field may return null, indicating that no valid value was found.
                     * @param _routePolicyName Specifies the routing strategy name.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRoutePolicyName(const std::string& _routePolicyName);

                    /**
                     * 判断参数 RoutePolicyName 是否已赋值
                     * @return RoutePolicyName 是否已赋值
                     * 
                     */
                    bool RoutePolicyNameHasBeenSet() const;

                    /**
                     * 获取Routing policy description.

Note: This field may return null, indicating that no valid value was found.
                     * @return RoutePolicyDescription Routing policy description.

Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRoutePolicyDescription() const;

                    /**
                     * 设置Routing policy description.

Note: This field may return null, indicating that no valid value was found.
                     * @param _routePolicyDescription Routing policy description.

Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRoutePolicyDescription(const std::string& _routePolicyDescription);

                    /**
                     * 判断参数 RoutePolicyDescription 是否已赋值
                     * @return RoutePolicyDescription 是否已赋值
                     * 
                     */
                    bool RoutePolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取Routing policy rule list.
Note: This field may return null, indicating that no valid value was found.
                     * @return RoutePolicyEntrySet Routing policy rule list.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<RoutePolicyEntry> GetRoutePolicyEntrySet() const;

                    /**
                     * 设置Routing policy rule list.
Note: This field may return null, indicating that no valid value was found.
                     * @param _routePolicyEntrySet Routing policy rule list.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRoutePolicyEntrySet(const std::vector<RoutePolicyEntry>& _routePolicyEntrySet);

                    /**
                     * 判断参数 RoutePolicyEntrySet 是否已赋值
                     * @return RoutePolicyEntrySet 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntrySetHasBeenSet() const;

                    /**
                     * 获取Specifies the routing strategy binding.
Note: This field may return null, indicating that no valid value was found.
                     * @return RoutePolicyAssociationSet Specifies the routing strategy binding.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<RoutePolicyAssociation> GetRoutePolicyAssociationSet() const;

                    /**
                     * 设置Specifies the routing strategy binding.
Note: This field may return null, indicating that no valid value was found.
                     * @param _routePolicyAssociationSet Specifies the routing strategy binding.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRoutePolicyAssociationSet(const std::vector<RoutePolicyAssociation>& _routePolicyAssociationSet);

                    /**
                     * 判断参数 RoutePolicyAssociationSet 是否已赋值
                     * @return RoutePolicyAssociationSet 是否已赋值
                     * 
                     */
                    bool RoutePolicyAssociationSetHasBeenSet() const;

                    /**
                     * 获取Creation time.

Note: This field may return null, indicating that no valid value was found.
                     * @return CreatedTime Creation time.

Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.

Note: This field may return null, indicating that no valid value was found.
                     * @param _createdTime Creation time.

Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Tag key-value pair.
                     * @return TagSet Tag key-value pair.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pair.
                     * @param _tagSet Tag key-value pair.
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the routing policy.

Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_routePolicyId;
                    bool m_routePolicyIdHasBeenSet;

                    /**
                     * Specifies the routing strategy name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_routePolicyName;
                    bool m_routePolicyNameHasBeenSet;

                    /**
                     * Routing policy description.

Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_routePolicyDescription;
                    bool m_routePolicyDescriptionHasBeenSet;

                    /**
                     * Routing policy rule list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<RoutePolicyEntry> m_routePolicyEntrySet;
                    bool m_routePolicyEntrySetHasBeenSet;

                    /**
                     * Specifies the routing strategy binding.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<RoutePolicyAssociation> m_routePolicyAssociationSet;
                    bool m_routePolicyAssociationSetHasBeenSet;

                    /**
                     * Creation time.

Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Tag key-value pair.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICY_H_
