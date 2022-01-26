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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TempCertificate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ApplyUpload response structure.
                */
                class ApplyUploadResponse : public AbstractModel
                {
                public:
                    ApplyUploadResponse();
                    ~ApplyUploadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Storage bucket, which is used as the `bucket_name` in the URL of the upload API.
                     * @return StorageBucket Storage bucket, which is used as the `bucket_name` in the URL of the upload API.
                     */
                    std::string GetStorageBucket() const;

                    /**
                     * 判断参数 StorageBucket 是否已赋值
                     * @return StorageBucket 是否已赋值
                     */
                    bool StorageBucketHasBeenSet() const;

                    /**
                     * 获取Storage region, which is used as the `Region` in the `Host` of the upload API.
                     * @return StorageRegion Storage region, which is used as the `Region` in the `Host` of the upload API.
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取VOD session, which is used to confirm the `VodSessionKey` parameter of the upload API.
                     * @return VodSessionKey VOD session, which is used to confirm the `VodSessionKey` parameter of the upload API.
                     */
                    std::string GetVodSessionKey() const;

                    /**
                     * 判断参数 VodSessionKey 是否已赋值
                     * @return VodSessionKey 是否已赋值
                     */
                    bool VodSessionKeyHasBeenSet() const;

                    /**
                     * 获取Media storage path, which is used as the `Key` of the stored media of the upload API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MediaStoragePath Media storage path, which is used as the `Key` of the stored media of the upload API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     */
                    bool MediaStoragePathHasBeenSet() const;

                    /**
                     * 获取Cover storage path, which is used as the `Key` of the stored cover of the upload API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoverStoragePath Cover storage path, which is used as the `Key` of the stored cover of the upload API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCoverStoragePath() const;

                    /**
                     * 判断参数 CoverStoragePath 是否已赋值
                     * @return CoverStoragePath 是否已赋值
                     */
                    bool CoverStoragePathHasBeenSet() const;

                    /**
                     * 获取Temporary credential, which is used for authentication of the upload API.
                     * @return TempCertificate Temporary credential, which is used for authentication of the upload API.
                     */
                    TempCertificate GetTempCertificate() const;

                    /**
                     * 判断参数 TempCertificate 是否已赋值
                     * @return TempCertificate 是否已赋值
                     */
                    bool TempCertificateHasBeenSet() const;

                private:

                    /**
                     * Storage bucket, which is used as the `bucket_name` in the URL of the upload API.
                     */
                    std::string m_storageBucket;
                    bool m_storageBucketHasBeenSet;

                    /**
                     * Storage region, which is used as the `Region` in the `Host` of the upload API.
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * VOD session, which is used to confirm the `VodSessionKey` parameter of the upload API.
                     */
                    std::string m_vodSessionKey;
                    bool m_vodSessionKeyHasBeenSet;

                    /**
                     * Media storage path, which is used as the `Key` of the stored media of the upload API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                    /**
                     * Cover storage path, which is used as the `Key` of the stored cover of the upload API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_coverStoragePath;
                    bool m_coverStoragePathHasBeenSet;

                    /**
                     * Temporary credential, which is used for authentication of the upload API.
                     */
                    TempCertificate m_tempCertificate;
                    bool m_tempCertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADRESPONSE_H_
