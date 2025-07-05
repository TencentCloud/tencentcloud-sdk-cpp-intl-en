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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_LOADSOURCE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_LOADSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Performance test host source.
                */
                class LoadSource : public AbstractModel
                {
                public:
                    LoadSource();
                    ~LoadSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pressure machine IP.

Note: This field may return null, indicating that no valid value is found.
                     * @return IP Pressure machine IP.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Pressure machine IP.

Note: This field may return null, indicating that no valid value is found.
                     * @param _iP Pressure machine IP.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Pressure machine pod.

Note: This field may return null, indicating that no valid value is found.
                     * @return PodName Pressure machine pod.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pressure machine pod.

Note: This field may return null, indicating that no valid value is found.
                     * @param _podName Pressure machine pod.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取Region.

Note: This field may return null, indicating that no valid value is found.
                     * @return Region Region.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.

Note: This field may return null, indicating that no valid value is found.
                     * @param _region Region.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Pressure machine IP.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Pressure machine pod.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Region.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_LOADSOURCE_H_
