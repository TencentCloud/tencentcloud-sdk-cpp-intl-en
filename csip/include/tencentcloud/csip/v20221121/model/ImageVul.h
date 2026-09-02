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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVUL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageVulBaseInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Image vulnerability information
                */
                class ImageVul : public AbstractModel
                {
                public:
                    ImageVul();
                    ~ImageVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Owner account name</p>
                     * @return OwnerAccountName <p>Owner account name</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Owner account name</p>
                     * @param _ownerAccountName <p>Owner account name</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Owner account uin</p>
                     * @return OwnerUin <p>Owner account uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>Owner account uin</p>
                     * @param _ownerUin <p>Owner account uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>Owner account appid</p>
                     * @return OwnerAppId <p>Owner account appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>Owner account appid</p>
                     * @param _ownerAppId <p>Owner account appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Record id</p>
                     * @return ID <p>Record id</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Record id</p>
                     * @param _iD <p>Record id</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return FirstFoundTime <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetFirstFoundTime() const;

                    /**
                     * 设置<p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _firstFoundTime <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetFirstFoundTime(const std::string& _firstFoundTime);

                    /**
                     * 判断参数 FirstFoundTime 是否已赋值
                     * @return FirstFoundTime 是否已赋值
                     * 
                     */
                    bool FirstFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestFoundTime <p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置<p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestFoundTime <p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability details</p>
                     * @return VulInfo <p>Vulnerability details</p>
                     * 
                     */
                    ImageVulBaseInfo GetVulInfo() const;

                    /**
                     * 设置<p>Vulnerability details</p>
                     * @param _vulInfo <p>Vulnerability details</p>
                     * 
                     */
                    void SetVulInfo(const ImageVulBaseInfo& _vulInfo);

                    /**
                     * 判断参数 VulInfo 是否已赋值
                     * @return VulInfo 是否已赋值
                     * 
                     */
                    bool VulInfoHasBeenSet() const;

                    /**
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageId <p>Image ID.</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                private:

                    /**
                     * <p>Owner account name</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>Owner account uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>Owner account appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Record id</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_firstFoundTime;
                    bool m_firstFoundTimeHasBeenSet;

                    /**
                     * <p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * <p>Vulnerability details</p>
                     */
                    ImageVulBaseInfo m_vulInfo;
                    bool m_vulInfoHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVUL_H_
