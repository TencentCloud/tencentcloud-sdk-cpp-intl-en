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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_GETACCOUNTFACTORYBASELINERESPONSE_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_GETACCOUNTFACTORYBASELINERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/BaselineInfoItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * GetAccountFactoryBaseline response structure.
                */
                class GetAccountFactoryBaselineResponse : public AbstractModel
                {
                public:
                    GetAccountFactoryBaselineResponse();
                    ~GetAccountFactoryBaselineResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the uin of the main account to which the resource belongs.
                     * @return OwnerUin Specifies the uin of the main account to which the resource belongs.
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Specifies the baseline item name, which must be unique and can only contain a combination of english letters, digits, chinese characters, and symbols @, &_[]-, with a length of 1-25 chinese or english characters.
                     * @return Name Specifies the baseline item name, which must be unique and can only contain a combination of english letters, digits, chinese characters, and symbols @, &_[]-, with a length of 1-25 chinese or english characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取List of baseline item configurations.
                     * @return BaselineConfigItems List of baseline item configurations.
                     * 
                     */
                    std::vector<BaselineInfoItem> GetBaselineConfigItems() const;

                    /**
                     * 判断参数 BaselineConfigItems 是否已赋值
                     * @return BaselineConfigItems 是否已赋值
                     * 
                     */
                    bool BaselineConfigItemsHasBeenSet() const;

                    /**
                     * 获取Creation time, represented in ISO8601 standard format as yyyy-MM-dd hh:MM:ss.
                     * @return CreateTime Creation time, represented in ISO8601 standard format as yyyy-MM-dd hh:MM:ss.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the last update time in ISO8601 standard representation with format yyyy-MM-dd hh:MM:ss.
                     * @return UpdateTime Specifies the last update time in ISO8601 standard representation with format yyyy-MM-dd hh:MM:ss.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Specifies the uin of the main account to which the resource belongs.
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Specifies the baseline item name, which must be unique and can only contain a combination of english letters, digits, chinese characters, and symbols @, &_[]-, with a length of 1-25 chinese or english characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of baseline item configurations.
                     */
                    std::vector<BaselineInfoItem> m_baselineConfigItems;
                    bool m_baselineConfigItemsHasBeenSet;

                    /**
                     * Creation time, represented in ISO8601 standard format as yyyy-MM-dd hh:MM:ss.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Specifies the last update time in ISO8601 standard representation with format yyyy-MM-dd hh:MM:ss.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_GETACCOUNTFACTORYBASELINERESPONSE_H_
