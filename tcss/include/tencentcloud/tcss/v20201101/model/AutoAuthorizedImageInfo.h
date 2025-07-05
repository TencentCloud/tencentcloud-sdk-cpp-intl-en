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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_AUTOAUTHORIZEDIMAGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_AUTOAUTHORIZEDIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Result of the automatic image licensing
                */
                class AutoAuthorizedImageInfo : public AbstractModel
                {
                public:
                    AutoAuthorizedImageInfo();
                    ~AutoAuthorizedImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID
                     * @return ImageId Image ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param _imageId Image ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param _imageName Image name
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Licensing time
                     * @return AuthorizedTime Licensing time
                     * 
                     */
                    std::string GetAuthorizedTime() const;

                    /**
                     * 设置Licensing time
                     * @param _authorizedTime Licensing time
                     * 
                     */
                    void SetAuthorizedTime(const std::string& _authorizedTime);

                    /**
                     * 判断参数 AuthorizedTime 是否已赋值
                     * @return AuthorizedTime 是否已赋值
                     * 
                     */
                    bool AuthorizedTimeHasBeenSet() const;

                    /**
                     * 获取Licensing result. Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * @return Status Licensing result. Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Licensing result. Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * @param _status Licensing result. Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     * @return IsAuthorized Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     * @param _isAuthorized Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     * 
                     */
                    void SetIsAuthorized(const uint64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Licensing time
                     */
                    std::string m_authorizedTime;
                    bool m_authorizedTimeHasBeenSet;

                    /**
                     * Licensing result. Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether it is licensed. Valid values: `1` (yes); `0` (no).
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_AUTOAUTHORIZEDIMAGEINFO_H_
