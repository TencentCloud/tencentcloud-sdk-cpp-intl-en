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
                     * 获取<p>Bucket for uploading the API URL bucket_name.</p>
                     * @return StorageBucket <p>Bucket for uploading the API URL bucket_name.</p>
                     * 
                     */
                    std::string GetStorageBucket() const;

                    /**
                     * 判断参数 StorageBucket 是否已赋值
                     * @return StorageBucket 是否已赋值
                     * 
                     */
                    bool StorageBucketHasBeenSet() const;

                    /**
                     * 获取<p>Storage campus for uploading the Host Region of the port.</p>
                     * @return StorageRegion <p>Storage campus for uploading the Host Region of the port.</p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>VOD session for confirmation of API parameters VodSessionKey.</p>
                     * @return VodSessionKey <p>VOD session for confirmation of API parameters VodSessionKey.</p>
                     * 
                     */
                    std::string GetVodSessionKey() const;

                    /**
                     * 判断参数 VodSessionKey 是否已赋值
                     * @return VodSessionKey 是否已赋值
                     * 
                     */
                    bool VodSessionKeyHasBeenSet() const;

                    /**
                     * 获取<p>Media storage path used for the object key (Key) of media stored by the upload API.</p>
                     * @return MediaStoragePath <p>Media storage path used for the object key (Key) of media stored by the upload API.</p>
                     * 
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     * 
                     */
                    bool MediaStoragePathHasBeenSet() const;

                    /**
                     * 获取<p>Cover storage path for uploading the object Key of the cover via API.</p>
                     * @return CoverStoragePath <p>Cover storage path for uploading the object Key of the cover via API.</p>
                     * 
                     */
                    std::string GetCoverStoragePath() const;

                    /**
                     * 判断参数 CoverStoragePath 是否已赋值
                     * @return CoverStoragePath 是否已赋值
                     * 
                     */
                    bool CoverStoragePathHasBeenSet() const;

                    /**
                     * 获取<p>Temporary credentials for uploading API access verification.</p>
                     * @return TempCertificate <p>Temporary credentials for uploading API access verification.</p>
                     * 
                     */
                    TempCertificate GetTempCertificate() const;

                    /**
                     * 判断参数 TempCertificate 是否已赋值
                     * @return TempCertificate 是否已赋值
                     * 
                     */
                    bool TempCertificateHasBeenSet() const;

                private:

                    /**
                     * <p>Bucket for uploading the API URL bucket_name.</p>
                     */
                    std::string m_storageBucket;
                    bool m_storageBucketHasBeenSet;

                    /**
                     * <p>Storage campus for uploading the Host Region of the port.</p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>VOD session for confirmation of API parameters VodSessionKey.</p>
                     */
                    std::string m_vodSessionKey;
                    bool m_vodSessionKeyHasBeenSet;

                    /**
                     * <p>Media storage path used for the object key (Key) of media stored by the upload API.</p>
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                    /**
                     * <p>Cover storage path for uploading the object Key of the cover via API.</p>
                     */
                    std::string m_coverStoragePath;
                    bool m_coverStoragePathHasBeenSet;

                    /**
                     * <p>Temporary credentials for uploading API access verification.</p>
                     */
                    TempCertificate m_tempCertificate;
                    bool m_tempCertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADRESPONSE_H_
