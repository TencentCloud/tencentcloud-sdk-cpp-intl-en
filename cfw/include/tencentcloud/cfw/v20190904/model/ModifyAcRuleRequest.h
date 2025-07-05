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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/RuleInfoData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyAcRule request structure.
                */
                class ModifyAcRuleRequest : public AbstractModel
                {
                public:
                    ModifyAcRuleRequest();
                    ~ModifyAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of rules
                     * @return Data Array of rules
                     * 
                     */
                    std::vector<RuleInfoData> GetData() const;

                    /**
                     * 设置Array of rules
                     * @param _data Array of rules
                     * 
                     */
                    void SetData(const std::vector<RuleInfoData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取EdgeId value
                     * @return EdgeId EdgeId value
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置EdgeId value
                     * @param _edgeId EdgeId value
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取Access rule status
                     * @return Enable Access rule status
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Access rule status
                     * @param _enable Access rule status
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取NAT region
                     * @return Area NAT region
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT region
                     * @param _area NAT region
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Array of rules
                     */
                    std::vector<RuleInfoData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * EdgeId value
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * Access rule status
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * NAT region
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYACRULEREQUEST_H_
