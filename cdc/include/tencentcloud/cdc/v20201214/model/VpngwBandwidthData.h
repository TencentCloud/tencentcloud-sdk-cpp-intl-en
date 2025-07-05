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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_VPNGWBANDWIDTHDATA_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_VPNGWBANDWIDTHDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/OutBandwidth.h>
#include <tencentcloud/cdc/v20201214/model/InBandwidth.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * VPN gateway traffic monitoring data
                */
                class VpngwBandwidthData : public AbstractModel
                {
                public:
                    VpngwBandwidthData();
                    ~VpngwBandwidthData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Outbound bandwidth traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return OutBandwidth Outbound bandwidth traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    OutBandwidth GetOutBandwidth() const;

                    /**
                     * 设置Outbound bandwidth traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _outBandwidth Outbound bandwidth traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetOutBandwidth(const OutBandwidth& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取Inbound bandwidth traffic
                     * @return InBandwidth Inbound bandwidth traffic
                     * 
                     */
                    InBandwidth GetInBandwidth() const;

                    /**
                     * 设置Inbound bandwidth traffic
                     * @param _inBandwidth Inbound bandwidth traffic
                     * 
                     */
                    void SetInBandwidth(const InBandwidth& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                private:

                    /**
                     * Outbound bandwidth traffic 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    OutBandwidth m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * Inbound bandwidth traffic
                     */
                    InBandwidth m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_VPNGWBANDWIDTHDATA_H_
