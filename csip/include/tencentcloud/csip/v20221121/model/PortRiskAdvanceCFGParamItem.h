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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PORTRISKADVANCECFGPARAMITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PORTRISKADVANCECFGPARAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Port Risk Advanced Configuration Item
                */
                class PortRiskAdvanceCFGParamItem : public AbstractModel
                {
                public:
                    PortRiskAdvanceCFGParamItem();
                    ~PortRiskAdvanceCFGParamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Port Collection, separated by commas.
                     * @return PortSets Port Collection, separated by commas.
                     * 
                     */
                    std::string GetPortSets() const;

                    /**
                     * 设置Port Collection, separated by commas.
                     * @param _portSets Port Collection, separated by commas.
                     * 
                     */
                    void SetPortSets(const std::string& _portSets);

                    /**
                     * 判断参数 PortSets 是否已赋值
                     * @return PortSets 是否已赋值
                     * 
                     */
                    bool PortSetsHasBeenSet() const;

                    /**
                     * 获取Detection Item Type. 0-System-Defined; 1-User-Defined.
                     * @return CheckType Detection Item Type. 0-System-Defined; 1-User-Defined.
                     * 
                     */
                    int64_t GetCheckType() const;

                    /**
                     * 设置Detection Item Type. 0-System-Defined; 1-User-Defined.
                     * @param _checkType Detection Item Type. 0-System-Defined; 1-User-Defined.
                     * 
                     */
                    void SetCheckType(const int64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取Detection item description
                     * @return Detail Detection item description
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Detection item description
                     * @param _detail Detection item description
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Enable/Disable. 1-Enable; 0-Disable.
                     * @return Enable Enable/Disable. 1-Enable; 0-Disable.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Enable/Disable. 1-Enable; 0-Disable.
                     * @param _enable Enable/Disable. 1-Enable; 0-Disable.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Port Collection, separated by commas.
                     */
                    std::string m_portSets;
                    bool m_portSetsHasBeenSet;

                    /**
                     * Detection Item Type. 0-System-Defined; 1-User-Defined.
                     */
                    int64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * Detection item description
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Enable/Disable. 1-Enable; 0-Disable.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PORTRISKADVANCECFGPARAMITEM_H_
