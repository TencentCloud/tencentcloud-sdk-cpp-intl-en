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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_COSVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_COSVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * COS storage volume.
                */
                class COSVolume : public AbstractModel
                {
                public:
                    COSVolume();
                    ~COSVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage volume name.
                     * @return VolumeName Storage volume name.
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置Storage volume name.
                     * @param _volumeName Storage volume name.
                     * 
                     */
                    void SetVolumeName(const std::string& _volumeName);

                    /**
                     * 判断参数 VolumeName 是否已赋值
                     * @return VolumeName 是否已赋值
                     * 
                     */
                    bool VolumeNameHasBeenSet() const;

                    /**
                     * 获取Secret name.
                     * @return Secret Secret name.
                     * 
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置Secret name.
                     * @param _secret Secret name.
                     * 
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                    /**
                     * 获取Region where the COS bucket is located.
                     * @return Region Region where the COS bucket is located.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region where the COS bucket is located.
                     * @param _region Region where the COS bucket is located.
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
                     * 获取Bucket name.
                     * @return Bucket Bucket name.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket name.
                     * @param _bucket Bucket name.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取COS subdirectory.
                     * @return SubPath COS subdirectory.
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置COS subdirectory.
                     * @param _subPath COS subdirectory.
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                private:

                    /**
                     * Storage volume name.
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * Secret name.
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                    /**
                     * Region where the COS bucket is located.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Bucket name.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS subdirectory.
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_COSVOLUME_H_
