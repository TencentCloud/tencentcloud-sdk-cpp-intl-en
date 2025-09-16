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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_VOLUMEMOUNT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_VOLUMEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CFSConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * External mounting information.
                */
                class VolumeMount : public AbstractModel
                {
                public:
                    VolumeMount();
                    ~VolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud File Storage (CFS) configuration information.
                     * @return CFSConfig Cloud File Storage (CFS) configuration information.
                     * 
                     */
                    CFSConfig GetCFSConfig() const;

                    /**
                     * 设置Cloud File Storage (CFS) configuration information.
                     * @param _cFSConfig Cloud File Storage (CFS) configuration information.
                     * 
                     */
                    void SetCFSConfig(const CFSConfig& _cFSConfig);

                    /**
                     * 判断参数 CFSConfig 是否已赋值
                     * @return CFSConfig 是否已赋值
                     * 
                     */
                    bool CFSConfigHasBeenSet() const;

                    /**
                     * 获取Mounting source type. Valid values: CFS and COS. The default value is CFS.
                     * @return VolumeSourceType Mounting source type. Valid values: CFS and COS. The default value is CFS.
                     * 
                     */
                    std::string GetVolumeSourceType() const;

                    /**
                     * 设置Mounting source type. Valid values: CFS and COS. The default value is CFS.
                     * @param _volumeSourceType Mounting source type. Valid values: CFS and COS. The default value is CFS.
                     * 
                     */
                    void SetVolumeSourceType(const std::string& _volumeSourceType);

                    /**
                     * 判断参数 VolumeSourceType 是否已赋值
                     * @return VolumeSourceType 是否已赋值
                     * 
                     */
                    bool VolumeSourceTypeHasBeenSet() const;

                    /**
                     * 获取Mounting path in the custom container.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MountPath Mounting path in the custom container.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置Mounting path in the custom container.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mountPath Mounting path in the custom container.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                private:

                    /**
                     * Cloud File Storage (CFS) configuration information.
                     */
                    CFSConfig m_cFSConfig;
                    bool m_cFSConfigHasBeenSet;

                    /**
                     * Mounting source type. Valid values: CFS and COS. The default value is CFS.
                     */
                    std::string m_volumeSourceType;
                    bool m_volumeSourceTypeHasBeenSet;

                    /**
                     * Mounting path in the custom container.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_VOLUMEMOUNT_H_
