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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_UPDATEACCOUNTFACTORYBASELINEREQUEST_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_UPDATEACCOUNTFACTORYBASELINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/BaselineConfigItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * UpdateAccountFactoryBaseline request structure.
                */
                class UpdateAccountFactoryBaselineRequest : public AbstractModel
                {
                public:
                    UpdateAccountFactoryBaselineRequest();
                    ~UpdateAccountFactoryBaselineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the baseline name, which must be unique and can only contain a combination of english letters, digits, chinese characters, and symbols @, &_[]-, with a length of 1-25 chinese or english characters.
                     * @return Name Specifies the baseline name, which must be unique and can only contain a combination of english letters, digits, chinese characters, and symbols @, &_[]-, with a length of 1-25 chinese or english characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the baseline name, which must be unique and can only contain a combination of english letters, digits, chinese characters, and symbols @, &_[]-, with a length of 1-25 chinese or english characters.
                     * @param _name Specifies the baseline name, which must be unique and can only contain a combination of english letters, digits, chinese characters, and symbols @, &_[]-, with a length of 1-25 chinese or english characters.
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
                     * 获取Baseline configuration. overwrite update. can be accessed through controlcenter:GetAccountFactoryBaseline to query existing baseline configuration. can be accessed through controlcenter:ListAccountFactoryBaselineItems to query supported baseline list.
                     * @return BaselineConfigItems Baseline configuration. overwrite update. can be accessed through controlcenter:GetAccountFactoryBaseline to query existing baseline configuration. can be accessed through controlcenter:ListAccountFactoryBaselineItems to query supported baseline list.
                     * 
                     */
                    std::vector<BaselineConfigItem> GetBaselineConfigItems() const;

                    /**
                     * 设置Baseline configuration. overwrite update. can be accessed through controlcenter:GetAccountFactoryBaseline to query existing baseline configuration. can be accessed through controlcenter:ListAccountFactoryBaselineItems to query supported baseline list.
                     * @param _baselineConfigItems Baseline configuration. overwrite update. can be accessed through controlcenter:GetAccountFactoryBaseline to query existing baseline configuration. can be accessed through controlcenter:ListAccountFactoryBaselineItems to query supported baseline list.
                     * 
                     */
                    void SetBaselineConfigItems(const std::vector<BaselineConfigItem>& _baselineConfigItems);

                    /**
                     * 判断参数 BaselineConfigItems 是否已赋值
                     * @return BaselineConfigItems 是否已赋值
                     * 
                     */
                    bool BaselineConfigItemsHasBeenSet() const;

                private:

                    /**
                     * Specifies the baseline name, which must be unique and can only contain a combination of english letters, digits, chinese characters, and symbols @, &_[]-, with a length of 1-25 chinese or english characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Baseline configuration. overwrite update. can be accessed through controlcenter:GetAccountFactoryBaseline to query existing baseline configuration. can be accessed through controlcenter:ListAccountFactoryBaselineItems to query supported baseline list.
                     */
                    std::vector<BaselineConfigItem> m_baselineConfigItems;
                    bool m_baselineConfigItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_UPDATEACCOUNTFACTORYBASELINEREQUEST_H_
