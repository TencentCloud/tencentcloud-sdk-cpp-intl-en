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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CODE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/ImageConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Function code
                */
                class Code : public AbstractModel
                {
                public:
                    Code();
                    ~Code() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Object bucket name (enter the custom part of the bucket name without `-appid`)
                     * @return CosBucketName Object bucket name (enter the custom part of the bucket name without `-appid`)
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置Object bucket name (enter the custom part of the bucket name without `-appid`)
                     * @param CosBucketName Object bucket name (enter the custom part of the bucket name without `-appid`)
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取File path of code package stored in COS, which should start with “/”
                     * @return CosObjectName File path of code package stored in COS, which should start with “/”
                     */
                    std::string GetCosObjectName() const;

                    /**
                     * 设置File path of code package stored in COS, which should start with “/”
                     * @param CosObjectName File path of code package stored in COS, which should start with “/”
                     */
                    void SetCosObjectName(const std::string& _cosObjectName);

                    /**
                     * 判断参数 CosObjectName 是否已赋值
                     * @return CosObjectName 是否已赋值
                     */
                    bool CosObjectNameHasBeenSet() const;

                    /**
                     * 获取This parameter contains a .zip file (up to 50 MB) of the function code file and its dependencies. When this API is used, the content of the .zip file needs to be Base64-encoded
                     * @return ZipFile This parameter contains a .zip file (up to 50 MB) of the function code file and its dependencies. When this API is used, the content of the .zip file needs to be Base64-encoded
                     */
                    std::string GetZipFile() const;

                    /**
                     * 设置This parameter contains a .zip file (up to 50 MB) of the function code file and its dependencies. When this API is used, the content of the .zip file needs to be Base64-encoded
                     * @param ZipFile This parameter contains a .zip file (up to 50 MB) of the function code file and its dependencies. When this API is used, the content of the .zip file needs to be Base64-encoded
                     */
                    void SetZipFile(const std::string& _zipFile);

                    /**
                     * 判断参数 ZipFile 是否已赋值
                     * @return ZipFile 是否已赋值
                     */
                    bool ZipFileHasBeenSet() const;

                    /**
                     * 获取COS region. For Beijing regions, you need to import `ap-beijing`. For Beijing Region 1, you need to input `ap-beijing-1`. For other regions, no import is required.
                     * @return CosBucketRegion COS region. For Beijing regions, you need to import `ap-beijing`. For Beijing Region 1, you need to input `ap-beijing-1`. For other regions, no import is required.
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置COS region. For Beijing regions, you need to import `ap-beijing`. For Beijing Region 1, you need to input `ap-beijing-1`. For other regions, no import is required.
                     * @param CosBucketRegion COS region. For Beijing regions, you need to import `ap-beijing`. For Beijing Region 1, you need to input `ap-beijing-1`. For other regions, no import is required.
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取`DemoId` is required if Demo is used for the creation.
                     * @return DemoId `DemoId` is required if Demo is used for the creation.
                     */
                    std::string GetDemoId() const;

                    /**
                     * 设置`DemoId` is required if Demo is used for the creation.
                     * @param DemoId `DemoId` is required if Demo is used for the creation.
                     */
                    void SetDemoId(const std::string& _demoId);

                    /**
                     * 判断参数 DemoId 是否已赋值
                     * @return DemoId 是否已赋值
                     */
                    bool DemoIdHasBeenSet() const;

                    /**
                     * 获取`TempCosObjectName` is required if TempCos is used for the creation.
                     * @return TempCosObjectName `TempCosObjectName` is required if TempCos is used for the creation.
                     */
                    std::string GetTempCosObjectName() const;

                    /**
                     * 设置`TempCosObjectName` is required if TempCos is used for the creation.
                     * @param TempCosObjectName `TempCosObjectName` is required if TempCos is used for the creation.
                     */
                    void SetTempCosObjectName(const std::string& _tempCosObjectName);

                    /**
                     * 判断参数 TempCosObjectName 是否已赋值
                     * @return TempCosObjectName 是否已赋值
                     */
                    bool TempCosObjectNameHasBeenSet() const;

                    /**
                     * 获取(Disused) Git address
                     * @return GitUrl (Disused) Git address
                     */
                    std::string GetGitUrl() const;

                    /**
                     * 设置(Disused) Git address
                     * @param GitUrl (Disused) Git address
                     */
                    void SetGitUrl(const std::string& _gitUrl);

                    /**
                     * 判断参数 GitUrl 是否已赋值
                     * @return GitUrl 是否已赋值
                     */
                    bool GitUrlHasBeenSet() const;

                    /**
                     * 获取(Disused) Git username
                     * @return GitUserName (Disused) Git username
                     */
                    std::string GetGitUserName() const;

                    /**
                     * 设置(Disused) Git username
                     * @param GitUserName (Disused) Git username
                     */
                    void SetGitUserName(const std::string& _gitUserName);

                    /**
                     * 判断参数 GitUserName 是否已赋值
                     * @return GitUserName 是否已赋值
                     */
                    bool GitUserNameHasBeenSet() const;

                    /**
                     * 获取(Disused) Git password
                     * @return GitPassword (Disused) Git password
                     */
                    std::string GetGitPassword() const;

                    /**
                     * 设置(Disused) Git password
                     * @param GitPassword (Disused) Git password
                     */
                    void SetGitPassword(const std::string& _gitPassword);

                    /**
                     * 判断参数 GitPassword 是否已赋值
                     * @return GitPassword 是否已赋值
                     */
                    bool GitPasswordHasBeenSet() const;

                    /**
                     * 获取(Disused) Git password after encryption. It’s usually not required.
                     * @return GitPasswordSecret (Disused) Git password after encryption. It’s usually not required.
                     */
                    std::string GetGitPasswordSecret() const;

                    /**
                     * 设置(Disused) Git password after encryption. It’s usually not required.
                     * @param GitPasswordSecret (Disused) Git password after encryption. It’s usually not required.
                     */
                    void SetGitPasswordSecret(const std::string& _gitPasswordSecret);

                    /**
                     * 判断参数 GitPasswordSecret 是否已赋值
                     * @return GitPasswordSecret 是否已赋值
                     */
                    bool GitPasswordSecretHasBeenSet() const;

                    /**
                     * 获取(Disused) Git branch
                     * @return GitBranch (Disused) Git branch
                     */
                    std::string GetGitBranch() const;

                    /**
                     * 设置(Disused) Git branch
                     * @param GitBranch (Disused) Git branch
                     */
                    void SetGitBranch(const std::string& _gitBranch);

                    /**
                     * 判断参数 GitBranch 是否已赋值
                     * @return GitBranch 是否已赋值
                     */
                    bool GitBranchHasBeenSet() const;

                    /**
                     * 获取(Disused) Directory to the codes in the Git repository. 
                     * @return GitDirectory (Disused) Directory to the codes in the Git repository. 
                     */
                    std::string GetGitDirectory() const;

                    /**
                     * 设置(Disused) Directory to the codes in the Git repository. 
                     * @param GitDirectory (Disused) Directory to the codes in the Git repository. 
                     */
                    void SetGitDirectory(const std::string& _gitDirectory);

                    /**
                     * 判断参数 GitDirectory 是否已赋值
                     * @return GitDirectory 是否已赋值
                     */
                    bool GitDirectoryHasBeenSet() const;

                    /**
                     * 获取(Disused) 
                     * @return GitCommitId (Disused) 
                     */
                    std::string GetGitCommitId() const;

                    /**
                     * 设置(Disused) 
                     * @param GitCommitId (Disused) 
                     */
                    void SetGitCommitId(const std::string& _gitCommitId);

                    /**
                     * 判断参数 GitCommitId 是否已赋值
                     * @return GitCommitId 是否已赋值
                     */
                    bool GitCommitIdHasBeenSet() const;

                    /**
                     * 获取(Disused) Git username after encryption. It’s usually not required.
                     * @return GitUserNameSecret (Disused) Git username after encryption. It’s usually not required.
                     */
                    std::string GetGitUserNameSecret() const;

                    /**
                     * 设置(Disused) Git username after encryption. It’s usually not required.
                     * @param GitUserNameSecret (Disused) Git username after encryption. It’s usually not required.
                     */
                    void SetGitUserNameSecret(const std::string& _gitUserNameSecret);

                    /**
                     * 判断参数 GitUserNameSecret 是否已赋值
                     * @return GitUserNameSecret 是否已赋值
                     */
                    bool GitUserNameSecretHasBeenSet() const;

                    /**
                     * 获取TCR image configurations
                     * @return ImageConfig TCR image configurations
                     */
                    ImageConfig GetImageConfig() const;

                    /**
                     * 设置TCR image configurations
                     * @param ImageConfig TCR image configurations
                     */
                    void SetImageConfig(const ImageConfig& _imageConfig);

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     */
                    bool ImageConfigHasBeenSet() const;

                private:

                    /**
                     * Object bucket name (enter the custom part of the bucket name without `-appid`)
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * File path of code package stored in COS, which should start with “/”
                     */
                    std::string m_cosObjectName;
                    bool m_cosObjectNameHasBeenSet;

                    /**
                     * This parameter contains a .zip file (up to 50 MB) of the function code file and its dependencies. When this API is used, the content of the .zip file needs to be Base64-encoded
                     */
                    std::string m_zipFile;
                    bool m_zipFileHasBeenSet;

                    /**
                     * COS region. For Beijing regions, you need to import `ap-beijing`. For Beijing Region 1, you need to input `ap-beijing-1`. For other regions, no import is required.
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * `DemoId` is required if Demo is used for the creation.
                     */
                    std::string m_demoId;
                    bool m_demoIdHasBeenSet;

                    /**
                     * `TempCosObjectName` is required if TempCos is used for the creation.
                     */
                    std::string m_tempCosObjectName;
                    bool m_tempCosObjectNameHasBeenSet;

                    /**
                     * (Disused) Git address
                     */
                    std::string m_gitUrl;
                    bool m_gitUrlHasBeenSet;

                    /**
                     * (Disused) Git username
                     */
                    std::string m_gitUserName;
                    bool m_gitUserNameHasBeenSet;

                    /**
                     * (Disused) Git password
                     */
                    std::string m_gitPassword;
                    bool m_gitPasswordHasBeenSet;

                    /**
                     * (Disused) Git password after encryption. It’s usually not required.
                     */
                    std::string m_gitPasswordSecret;
                    bool m_gitPasswordSecretHasBeenSet;

                    /**
                     * (Disused) Git branch
                     */
                    std::string m_gitBranch;
                    bool m_gitBranchHasBeenSet;

                    /**
                     * (Disused) Directory to the codes in the Git repository. 
                     */
                    std::string m_gitDirectory;
                    bool m_gitDirectoryHasBeenSet;

                    /**
                     * (Disused) 
                     */
                    std::string m_gitCommitId;
                    bool m_gitCommitIdHasBeenSet;

                    /**
                     * (Disused) Git username after encryption. It’s usually not required.
                     */
                    std::string m_gitUserNameSecret;
                    bool m_gitUserNameSecretHasBeenSet;

                    /**
                     * TCR image configurations
                     */
                    ImageConfig m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CODE_H_
