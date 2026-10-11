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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CBSVolume.h>
#include <tencentcloud/emr/v20190103/model/CFSVolume.h>
#include <tencentcloud/emr/v20190103/model/COSVolume.h>
#include <tencentcloud/emr/v20190103/model/VolumeMount.h>
#include <tencentcloud/emr/v20190103/model/StorageVolumeDetail.h>
#include <tencentcloud/emr/v20190103/model/CFSTurboVolume.h>
#include <tencentcloud/emr/v20190103/model/GooseFSVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Volume directory.
                */
                class PersistentVolume : public AbstractModel
                {
                public:
                    PersistentVolume();
                    ~PersistentVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CBS storage volume.</p>
                     * @return CBSVolumes <p>CBS storage volume.</p>
                     * 
                     */
                    std::vector<CBSVolume> GetCBSVolumes() const;

                    /**
                     * 设置<p>CBS storage volume.</p>
                     * @param _cBSVolumes <p>CBS storage volume.</p>
                     * 
                     */
                    void SetCBSVolumes(const std::vector<CBSVolume>& _cBSVolumes);

                    /**
                     * 判断参数 CBSVolumes 是否已赋值
                     * @return CBSVolumes 是否已赋值
                     * 
                     */
                    bool CBSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>CFS storage volume.</p>
                     * @return CFSVolumes <p>CFS storage volume.</p>
                     * 
                     */
                    std::vector<CFSVolume> GetCFSVolumes() const;

                    /**
                     * 设置<p>CFS storage volume.</p>
                     * @param _cFSVolumes <p>CFS storage volume.</p>
                     * 
                     */
                    void SetCFSVolumes(const std::vector<CFSVolume>& _cFSVolumes);

                    /**
                     * 判断参数 CFSVolumes 是否已赋值
                     * @return CFSVolumes 是否已赋值
                     * 
                     */
                    bool CFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>COS storage volume.</p>
                     * @return COSVolumes <p>COS storage volume.</p>
                     * 
                     */
                    std::vector<COSVolume> GetCOSVolumes() const;

                    /**
                     * 设置<p>COS storage volume.</p>
                     * @param _cOSVolumes <p>COS storage volume.</p>
                     * 
                     */
                    void SetCOSVolumes(const std::vector<COSVolume>& _cOSVolumes);

                    /**
                     * 判断参数 COSVolumes 是否已赋值
                     * @return COSVolumes 是否已赋值
                     * 
                     */
                    bool COSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>Storage volume name (the YAML submission has no storage volume type).</p>
                     * @return StorageVolumeName <p>Storage volume name (the YAML submission has no storage volume type).</p>
                     * 
                     */
                    std::vector<std::string> GetStorageVolumeName() const;

                    /**
                     * 设置<p>Storage volume name (the YAML submission has no storage volume type).</p>
                     * @param _storageVolumeName <p>Storage volume name (the YAML submission has no storage volume type).</p>
                     * 
                     */
                    void SetStorageVolumeName(const std::vector<std::string>& _storageVolumeName);

                    /**
                     * 判断参数 StorageVolumeName 是否已赋值
                     * @return StorageVolumeName 是否已赋值
                     * 
                     */
                    bool StorageVolumeNameHasBeenSet() const;

                    /**
                     * 获取<p>Storage volume list.</p>
                     * @return VolumeMounts <p>Storage volume list.</p>
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置<p>Storage volume list.</p>
                     * @param _volumeMounts <p>Storage volume list.</p>
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                    /**
                     * 获取<p>Storage volume details.</p>
                     * @return StorageVolumeDetail <p>Storage volume details.</p>
                     * 
                     */
                    std::vector<StorageVolumeDetail> GetStorageVolumeDetail() const;

                    /**
                     * 设置<p>Storage volume details.</p>
                     * @param _storageVolumeDetail <p>Storage volume details.</p>
                     * 
                     */
                    void SetStorageVolumeDetail(const std::vector<StorageVolumeDetail>& _storageVolumeDetail);

                    /**
                     * 判断参数 StorageVolumeDetail 是否已赋值
                     * @return StorageVolumeDetail 是否已赋值
                     * 
                     */
                    bool StorageVolumeDetailHasBeenSet() const;

                    /**
                     * 获取<p>CFS Turbo storage volume.</p>
                     * @return CFSTurboVolumes <p>CFS Turbo storage volume.</p>
                     * 
                     */
                    std::vector<CFSTurboVolume> GetCFSTurboVolumes() const;

                    /**
                     * 设置<p>CFS Turbo storage volume.</p>
                     * @param _cFSTurboVolumes <p>CFS Turbo storage volume.</p>
                     * 
                     */
                    void SetCFSTurboVolumes(const std::vector<CFSTurboVolume>& _cFSTurboVolumes);

                    /**
                     * 判断参数 CFSTurboVolumes 是否已赋值
                     * @return CFSTurboVolumes 是否已赋值
                     * 
                     */
                    bool CFSTurboVolumesHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS volume mount information.</p>
                     * @return GooseFSVolumes <p>GooseFS volume mount information.</p>
                     * 
                     */
                    std::vector<GooseFSVolume> GetGooseFSVolumes() const;

                    /**
                     * 设置<p>GooseFS volume mount information.</p>
                     * @param _gooseFSVolumes <p>GooseFS volume mount information.</p>
                     * 
                     */
                    void SetGooseFSVolumes(const std::vector<GooseFSVolume>& _gooseFSVolumes);

                    /**
                     * 判断参数 GooseFSVolumes 是否已赋值
                     * @return GooseFSVolumes 是否已赋值
                     * 
                     */
                    bool GooseFSVolumesHasBeenSet() const;

                private:

                    /**
                     * <p>CBS storage volume.</p>
                     */
                    std::vector<CBSVolume> m_cBSVolumes;
                    bool m_cBSVolumesHasBeenSet;

                    /**
                     * <p>CFS storage volume.</p>
                     */
                    std::vector<CFSVolume> m_cFSVolumes;
                    bool m_cFSVolumesHasBeenSet;

                    /**
                     * <p>COS storage volume.</p>
                     */
                    std::vector<COSVolume> m_cOSVolumes;
                    bool m_cOSVolumesHasBeenSet;

                    /**
                     * <p>Storage volume name (the YAML submission has no storage volume type).</p>
                     */
                    std::vector<std::string> m_storageVolumeName;
                    bool m_storageVolumeNameHasBeenSet;

                    /**
                     * <p>Storage volume list.</p>
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * <p>Storage volume details.</p>
                     */
                    std::vector<StorageVolumeDetail> m_storageVolumeDetail;
                    bool m_storageVolumeDetailHasBeenSet;

                    /**
                     * <p>CFS Turbo storage volume.</p>
                     */
                    std::vector<CFSTurboVolume> m_cFSTurboVolumes;
                    bool m_cFSTurboVolumesHasBeenSet;

                    /**
                     * <p>GooseFS volume mount information.</p>
                     */
                    std::vector<GooseFSVolume> m_gooseFSVolumes;
                    bool m_gooseFSVolumesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUME_H_
