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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYDETECTIONHOSTPARAM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYDETECTIONHOSTPARAM_H_

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
                * Probe host parameters in the mirror repository
                */
                class ImageRegistryDetectionHostParam : public AbstractModel
                {
                public:
                    ImageRegistryDetectionHostParam();
                    ~ImageRegistryDetectionHostParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Host UUID.</p>
                     * @return InstanceUuid <p>Host UUID.</p>
                     * 
                     */
                    std::string GetInstanceUuid() const;

                    /**
                     * 设置<p>Host UUID.</p>
                     * @param _instanceUuid <p>Host UUID.</p>
                     * 
                     */
                    void SetInstanceUuid(const std::string& _instanceUuid);

                    /**
                     * 判断参数 InstanceUuid 是否已赋值
                     * @return InstanceUuid 是否已赋值
                     * 
                     */
                    bool InstanceUuidHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Host quuid</p>
                     * @return Quuid <p>Host quuid</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Host quuid</p>
                     * @param _quuid <p>Host quuid</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * <p>Host UUID.</p>
                     */
                    std::string m_instanceUuid;
                    bool m_instanceUuidHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Host quuid</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYDETECTIONHOSTPARAM_H_
