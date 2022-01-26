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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSBYTYPE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSBYTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * The maximum number of Pods in VPC-CNI mode supported by a model
                */
                class PodLimitsByType : public AbstractModel
                {
                public:
                    PodLimitsByType();
                    ~PodLimitsByType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of Pods supported by a TKE shared ENI in non-static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return TKERouteENINonStaticIP The number of Pods supported by a TKE shared ENI in non-static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetTKERouteENINonStaticIP() const;

                    /**
                     * 设置The number of Pods supported by a TKE shared ENI in non-static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param TKERouteENINonStaticIP The number of Pods supported by a TKE shared ENI in non-static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetTKERouteENINonStaticIP(const int64_t& _tKERouteENINonStaticIP);

                    /**
                     * 判断参数 TKERouteENINonStaticIP 是否已赋值
                     * @return TKERouteENINonStaticIP 是否已赋值
                     */
                    bool TKERouteENINonStaticIPHasBeenSet() const;

                    /**
                     * 获取The number of Pods supported by a TKE shared ENI in static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return TKERouteENIStaticIP The number of Pods supported by a TKE shared ENI in static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetTKERouteENIStaticIP() const;

                    /**
                     * 设置The number of Pods supported by a TKE shared ENI in static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param TKERouteENIStaticIP The number of Pods supported by a TKE shared ENI in static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetTKERouteENIStaticIP(const int64_t& _tKERouteENIStaticIP);

                    /**
                     * 判断参数 TKERouteENIStaticIP 是否已赋值
                     * @return TKERouteENIStaticIP 是否已赋值
                     */
                    bool TKERouteENIStaticIPHasBeenSet() const;

                    /**
                     * 获取The number of Pods supported by TKE independent ENI mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return TKEDirectENI The number of Pods supported by TKE independent ENI mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetTKEDirectENI() const;

                    /**
                     * 设置The number of Pods supported by TKE independent ENI mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param TKEDirectENI The number of Pods supported by TKE independent ENI mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetTKEDirectENI(const int64_t& _tKEDirectENI);

                    /**
                     * 判断参数 TKEDirectENI 是否已赋值
                     * @return TKEDirectENI 是否已赋值
                     */
                    bool TKEDirectENIHasBeenSet() const;

                private:

                    /**
                     * The number of Pods supported by a TKE shared ENI in non-static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_tKERouteENINonStaticIP;
                    bool m_tKERouteENINonStaticIPHasBeenSet;

                    /**
                     * The number of Pods supported by a TKE shared ENI in static IP address mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_tKERouteENIStaticIP;
                    bool m_tKERouteENIStaticIPHasBeenSet;

                    /**
                     * The number of Pods supported by TKE independent ENI mode
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_tKEDirectENI;
                    bool m_tKEDirectENIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSBYTYPE_H_
