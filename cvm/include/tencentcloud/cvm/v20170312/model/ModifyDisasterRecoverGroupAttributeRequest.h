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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDisasterRecoverGroupAttribute request structure.
                */
                class ModifyDisasterRecoverGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDisasterRecoverGroupAttributeRequest();
                    ~ModifyDisasterRecoverGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Spread placement group ID, which can be obtained by calling the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API.
                     * @return DisasterRecoverGroupId Spread placement group ID, which can be obtained by calling the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置Spread placement group ID, which can be obtained by calling the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API.
                     * @param _disasterRecoverGroupId Spread placement group ID, which can be obtained by calling the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API.
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取Name of a spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     * @return Name Name of a spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     * @param _name Name of a spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Spread placement group ID, which can be obtained by calling the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API.
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * Name of a spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_
