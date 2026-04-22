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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPVERSIONREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * CreateMNPVersion request structure.
                */
                class CreateMNPVersionRequest : public AbstractModel
                {
                public:
                    CreateMNPVersionRequest();
                    ~CreateMNPVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Mini-program appid</p>
                     * @return MNPId <p>Mini-program appid</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini-program appid</p>
                     * @param _mNPId <p>Mini-program appid</p>
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取<p>Version number</p>
                     * @return MNPVersion <p>Version number</p>
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置<p>Version number</p>
                     * @param _mNPVersion <p>Version number</p>
                     * 
                     */
                    void SetMNPVersion(const std::string& _mNPVersion);

                    /**
                     * 判断参数 MNPVersion 是否已赋值
                     * @return MNPVersion 是否已赋值
                     * 
                     */
                    bool MNPVersionHasBeenSet() const;

                    /**
                     * 获取<p>URL of the mini program file exported from the IDE and uploaded to the file server.<p>
                     * @return FileUrl <p>URL of the mini program file exported from the IDE and uploaded to the file server.<p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>URL of the mini program file exported from the IDE and uploaded to the file server.<p>
                     * @param _fileUrl <p>URL of the mini program file exported from the IDE and uploaded to the file server.<p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>Platform ID</p>
                     * @return PlatformId <p>Platform ID</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID</p>
                     * @param _platformId <p>Platform ID</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>Version description</p>
                     * @return MNPVersionIntro <p>Version description</p>
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置<p>Version description</p>
                     * @param _mNPVersionIntro <p>Version description</p>
                     * 
                     */
                    void SetMNPVersionIntro(const std::string& _mNPVersionIntro);

                    /**
                     * 判断参数 MNPVersionIntro 是否已赋值
                     * @return MNPVersionIntro 是否已赋值
                     * 
                     */
                    bool MNPVersionIntroHasBeenSet() const;

                private:

                    /**
                     * <p>Mini-program appid</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Version number</p>
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * <p>URL of the mini program file exported from the IDE and uploaded to the file server.<p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>Platform ID</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Version description</p>
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPVERSIONREQUEST_H_
