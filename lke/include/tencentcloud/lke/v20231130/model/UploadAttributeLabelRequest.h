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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_UPLOADATTRIBUTELABELREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_UPLOADATTRIBUTELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * UploadAttributeLabel request structure.
                */
                class UploadAttributeLabelRequest : public AbstractModel
                {
                public:
                    UploadAttributeLabelRequest();
                    ~UploadAttributeLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Filename.
                     * @return FileName Filename.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename.
                     * @param _fileName Filename.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Cos path.
                     * @return CosUrl Cos path.
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置Cos path.
                     * @param _cosUrl Cos path.
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取Verify the consistency of files uploaded to the cloud and local files by validating the crc64 encoding in the x-cos-hash-crc64ecma header.
                     * @return CosHash Verify the consistency of files uploaded to the cloud and local files by validating the crc64 encoding in the x-cos-hash-crc64ecma header.
                     * 
                     */
                    std::string GetCosHash() const;

                    /**
                     * 设置Verify the consistency of files uploaded to the cloud and local files by validating the crc64 encoding in the x-cos-hash-crc64ecma header.
                     * @param _cosHash Verify the consistency of files uploaded to the cloud and local files by validating the crc64 encoding in the x-cos-hash-crc64ecma header.
                     * 
                     */
                    void SetCosHash(const std::string& _cosHash);

                    /**
                     * 判断参数 CosHash 是否已赋值
                     * @return CosHash 是否已赋值
                     * 
                     */
                    bool CosHashHasBeenSet() const;

                    /**
                     * 获取File size.
                     * @return Size File size.
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置File size.
                     * @param _size File size.
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Login to user's root account (required in integrator mode).
                     * @return LoginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Login to user's root account (required in integrator mode).
                     * @param _loginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取Login to user's sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Filename.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Cos path.
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * Verify the consistency of files uploaded to the cloud and local files by validating the crc64 encoding in the x-cos-hash-crc64ecma header.
                     */
                    std::string m_cosHash;
                    bool m_cosHashHasBeenSet;

                    /**
                     * File size.
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Login to user's root account (required in integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UPLOADATTRIBUTELABELREQUEST_H_
