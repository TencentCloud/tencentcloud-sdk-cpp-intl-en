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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CREATEAGGREGATORREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CREATEAGGREGATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/AggregatorAccount.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * CreateAggregator request structure.
                */
                class CreateAggregatorRequest : public AbstractModel
                {
                public:
                    CreateAggregatorRequest();
                    ~CreateAggregatorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Account group name.</p>
                     * @return Name <p>Account group name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Account group name.</p>
                     * @param _name <p>Account group name.</p>
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
                     * 获取<p>Account group description.</p>
                     * @return Description <p>Account group description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Account group description.</p>
                     * @param _description <p>Account group description.</p>
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
                     * 获取<p>Account group type.</p><p>Valid values:</p><ul><li>RD: Global account group</li><li>CUSTOM: Custom account group</li></ul>
                     * @return Type <p>Account group type.</p><p>Valid values:</p><ul><li>RD: Global account group</li><li>CUSTOM: Custom account group</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Account group type.</p><p>Valid values:</p><ul><li>RD: Global account group</li><li>CUSTOM: Custom account group</li></ul>
                     * @param _type <p>Account group type.</p><p>Valid values:</p><ul><li>RD: Global account group</li><li>CUSTOM: Custom account group</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Account group member list, up to 100 entries.</p>
                     * @return AggregatorAccounts <p>Account group member list, up to 100 entries.</p>
                     * 
                     */
                    std::vector<AggregatorAccount> GetAggregatorAccounts() const;

                    /**
                     * 设置<p>Account group member list, up to 100 entries.</p>
                     * @param _aggregatorAccounts <p>Account group member list, up to 100 entries.</p>
                     * 
                     */
                    void SetAggregatorAccounts(const std::vector<AggregatorAccount>& _aggregatorAccounts);

                    /**
                     * 判断参数 AggregatorAccounts 是否已赋值
                     * @return AggregatorAccounts 是否已赋值
                     * 
                     */
                    bool AggregatorAccountsHasBeenSet() const;

                private:

                    /**
                     * <p>Account group name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Account group description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Account group type.</p><p>Valid values:</p><ul><li>RD: Global account group</li><li>CUSTOM: Custom account group</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Account group member list, up to 100 entries.</p>
                     */
                    std::vector<AggregatorAccount> m_aggregatorAccounts;
                    bool m_aggregatorAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CREATEAGGREGATORREQUEST_H_
