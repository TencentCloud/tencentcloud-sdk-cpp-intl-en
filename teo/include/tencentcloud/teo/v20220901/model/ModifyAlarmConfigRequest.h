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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMCONFIGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyAlarmConfig request structure.
                */
                class ModifyAlarmConfigRequest : public AbstractModel
                {
                public:
                    ModifyAlarmConfigRequest();
                    ~ModifyAlarmConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     * @return ServiceType The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     * @param ServiceType The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The list of protection entities.
                     * @return EntityList The list of protection entities.
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置The list of protection entities.
                     * @param EntityList The list of protection entities.
                     */
                    void SetEntityList(const std::vector<std::string>& _entityList);

                    /**
                     * 判断参数 EntityList 是否已赋值
                     * @return EntityList 是否已赋值
                     */
                    bool EntityListHasBeenSet() const;

                    /**
                     * 获取The alarm threshold. When no value or 0 is passed, the default alarm threshold will be used.
                     * @return Threshold The alarm threshold. When no value or 0 is passed, the default alarm threshold will be used.
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置The alarm threshold. When no value or 0 is passed, the default alarm threshold will be used.
                     * @param Threshold The alarm threshold. When no value or 0 is passed, the default alarm threshold will be used.
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Whether the default alarm threshold is used.
                     * @return IsDefault Whether the default alarm threshold is used.
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether the default alarm threshold is used.
                     * @param IsDefault Whether the default alarm threshold is used.
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The list of protection entities.
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * The alarm threshold. When no value or 0 is passed, the default alarm threshold will be used.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Whether the default alarm threshold is used.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMCONFIGREQUEST_H_
