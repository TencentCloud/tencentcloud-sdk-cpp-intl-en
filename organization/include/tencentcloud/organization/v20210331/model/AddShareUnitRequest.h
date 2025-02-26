/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AddShareUnit request structure.
                */
                class AddShareUnitRequest : public AbstractModel
                {
                public:
                    AddShareUnitRequest();
                    ~AddShareUnitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shared unit name. It only supports combinations of uppercase and lowercase letters, digits, hyphens (-), and underscores (_), with 3 to 128 characters.
                     * @return Name Shared unit name. It only supports combinations of uppercase and lowercase letters, digits, hyphens (-), and underscores (_), with 3 to 128 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Shared unit name. It only supports combinations of uppercase and lowercase letters, digits, hyphens (-), and underscores (_), with 3 to 128 characters.
                     * @param _name Shared unit name. It only supports combinations of uppercase and lowercase letters, digits, hyphens (-), and underscores (_), with 3 to 128 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Shared unit region. You can obtain supported shared regions through the API [DescribeShareAreas](https://intl.cloud.tencent.com/document/product/850/103050?from_cn_redirect=1).
                     * @return Area Shared unit region. You can obtain supported shared regions through the API [DescribeShareAreas](https://intl.cloud.tencent.com/document/product/850/103050?from_cn_redirect=1).
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Shared unit region. You can obtain supported shared regions through the API [DescribeShareAreas](https://intl.cloud.tencent.com/document/product/850/103050?from_cn_redirect=1).
                     * @param _area Shared unit region. You can obtain supported shared regions through the API [DescribeShareAreas](https://intl.cloud.tencent.com/document/product/850/103050?from_cn_redirect=1).
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Shared unit description. Maximum: 128 characters.
                     * @return Description Shared unit description. Maximum: 128 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Shared unit description. Maximum: 128 characters.
                     * @param _description Shared unit description. Maximum: 128 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed. Default value: 1
                     * @return ShareScope Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed. Default value: 1
                     * 
                     */
                    uint64_t GetShareScope() const;

                    /**
                     * 设置Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed. Default value: 1
                     * @param _shareScope Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed. Default value: 1
                     * 
                     */
                    void SetShareScope(const uint64_t& _shareScope);

                    /**
                     * 判断参数 ShareScope 是否已赋值
                     * @return ShareScope 是否已赋值
                     * 
                     */
                    bool ShareScopeHasBeenSet() const;

                private:

                    /**
                     * Shared unit name. It only supports combinations of uppercase and lowercase letters, digits, hyphens (-), and underscores (_), with 3 to 128 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Shared unit region. You can obtain supported shared regions through the API [DescribeShareAreas](https://intl.cloud.tencent.com/document/product/850/103050?from_cn_redirect=1).
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Shared unit description. Maximum: 128 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed. Default value: 1
                     */
                    uint64_t m_shareScope;
                    bool m_shareScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITREQUEST_H_
