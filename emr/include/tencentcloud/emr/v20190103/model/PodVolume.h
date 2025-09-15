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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PersistentVolumeContext.h>
#include <tencentcloud/emr/v20190103/model/HostVolumeContext.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Description of Pod storage.
                */
                class PodVolume : public AbstractModel
                {
                public:
                    PodVolume();
                    ~PodVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage type, which can be "pvc" or "hostpath".
                     * @return VolumeType Storage type, which can be "pvc" or "hostpath".
                     * 
                     */
                    std::string GetVolumeType() const;

                    /**
                     * 设置Storage type, which can be "pvc" or "hostpath".
                     * @param _volumeType Storage type, which can be "pvc" or "hostpath".
                     * 
                     */
                    void SetVolumeType(const std::string& _volumeType);

                    /**
                     * 判断参数 VolumeType 是否已赋值
                     * @return VolumeType 是否已赋值
                     * 
                     */
                    bool VolumeTypeHasBeenSet() const;

                    /**
                     * 获取This field will take effect if `VolumeType` is `pvc`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PVCVolume This field will take effect if `VolumeType` is `pvc`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PersistentVolumeContext GetPVCVolume() const;

                    /**
                     * 设置This field will take effect if `VolumeType` is `pvc`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pVCVolume This field will take effect if `VolumeType` is `pvc`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPVCVolume(const PersistentVolumeContext& _pVCVolume);

                    /**
                     * 判断参数 PVCVolume 是否已赋值
                     * @return PVCVolume 是否已赋值
                     * 
                     */
                    bool PVCVolumeHasBeenSet() const;

                    /**
                     * 获取This field will take effect if `VolumeType` is `hostpath`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostVolume This field will take effect if `VolumeType` is `hostpath`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HostVolumeContext GetHostVolume() const;

                    /**
                     * 设置This field will take effect if `VolumeType` is `hostpath`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostVolume This field will take effect if `VolumeType` is `hostpath`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostVolume(const HostVolumeContext& _hostVolume);

                    /**
                     * 判断参数 HostVolume 是否已赋值
                     * @return HostVolume 是否已赋值
                     * 
                     */
                    bool HostVolumeHasBeenSet() const;

                private:

                    /**
                     * Storage type, which can be "pvc" or "hostpath".
                     */
                    std::string m_volumeType;
                    bool m_volumeTypeHasBeenSet;

                    /**
                     * This field will take effect if `VolumeType` is `pvc`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PersistentVolumeContext m_pVCVolume;
                    bool m_pVCVolumeHasBeenSet;

                    /**
                     * This field will take effect if `VolumeType` is `hostpath`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HostVolumeContext m_hostVolume;
                    bool m_hostVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODVOLUME_H_
