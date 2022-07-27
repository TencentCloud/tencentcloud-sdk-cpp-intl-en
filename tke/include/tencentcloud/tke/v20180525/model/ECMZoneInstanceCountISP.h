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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ECMZONEINSTANCECOUNTISP_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ECMZONEINSTANCECOUNTISP_H_

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
                * Combination of the ECM instance AZ, number of instances, and ISP
                */
                class ECMZoneInstanceCountISP : public AbstractModel
                {
                public:
                    ECMZoneInstanceCountISP();
                    ~ECMZoneInstanceCountISP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance AZ
                     * @return Zone Instance AZ
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ
                     * @param Zone Instance AZ
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Number of instances to be created in the current AZ
                     * @return InstanceCount Number of instances to be created in the current AZ
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances to be created in the current AZ
                     * @param InstanceCount Number of instances to be created in the current AZ
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取ISP
                     * @return ISP ISP
                     */
                    std::string GetISP() const;

                    /**
                     * 设置ISP
                     * @param ISP ISP
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     */
                    bool ISPHasBeenSet() const;

                private:

                    /**
                     * Instance AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of instances to be created in the current AZ
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * ISP
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ECMZONEINSTANCECOUNTISP_H_
