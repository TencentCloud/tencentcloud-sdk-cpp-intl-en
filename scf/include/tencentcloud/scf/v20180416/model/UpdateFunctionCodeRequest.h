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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCODEREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Code.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateFunctionCode request structure.
                */
                class UpdateFunctionCodeRequest : public AbstractModel
                {
                public:
                    UpdateFunctionCodeRequest();
                    ~UpdateFunctionCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the function to be modified
                     * @return FunctionName Name of the function to be modified
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the function to be modified
                     * @param _functionName Name of the function to be modified
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function handler name, which is in the `file name.function name` form. Use a period (.) to separate a file name and function name. The file name and function name must start and end with letters and contain 2-60 characters, including letters, digits, underscores (_), and hyphens (-).
                     * @return Handler Function handler name, which is in the `file name.function name` form. Use a period (.) to separate a file name and function name. The file name and function name must start and end with letters and contain 2-60 characters, including letters, digits, underscores (_), and hyphens (-).
                     * 
                     */
                    std::string GetHandler() const;

                    /**
                     * 设置Function handler name, which is in the `file name.function name` form. Use a period (.) to separate a file name and function name. The file name and function name must start and end with letters and contain 2-60 characters, including letters, digits, underscores (_), and hyphens (-).
                     * @param _handler Function handler name, which is in the `file name.function name` form. Use a period (.) to separate a file name and function name. The file name and function name must start and end with letters and contain 2-60 characters, including letters, digits, underscores (_), and hyphens (-).
                     * 
                     */
                    void SetHandler(const std::string& _handler);

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     * 
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取COS bucket name
                     * @return CosBucketName COS bucket name
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置COS bucket name
                     * @param _cosBucketName COS bucket name
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取COS object path
                     * @return CosObjectName COS object path
                     * 
                     */
                    std::string GetCosObjectName() const;

                    /**
                     * 设置COS object path
                     * @param _cosObjectName COS object path
                     * 
                     */
                    void SetCosObjectName(const std::string& _cosObjectName);

                    /**
                     * 判断参数 CosObjectName 是否已赋值
                     * @return CosObjectName 是否已赋值
                     * 
                     */
                    bool CosObjectNameHasBeenSet() const;

                    /**
                     * 获取It contains a function code file and its dependencies in the ZIP format. When you use this API, the ZIP file needs to be encoded with Base64. Up to 20 MB is supported.
                     * @return ZipFile It contains a function code file and its dependencies in the ZIP format. When you use this API, the ZIP file needs to be encoded with Base64. Up to 20 MB is supported.
                     * 
                     */
                    std::string GetZipFile() const;

                    /**
                     * 设置It contains a function code file and its dependencies in the ZIP format. When you use this API, the ZIP file needs to be encoded with Base64. Up to 20 MB is supported.
                     * @param _zipFile It contains a function code file and its dependencies in the ZIP format. When you use this API, the ZIP file needs to be encoded with Base64. Up to 20 MB is supported.
                     * 
                     */
                    void SetZipFile(const std::string& _zipFile);

                    /**
                     * 判断参数 ZipFile 是否已赋值
                     * @return ZipFile 是否已赋值
                     * 
                     */
                    bool ZipFileHasBeenSet() const;

                    /**
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace
                     * @param _namespace Function namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取COS region. Note: Beijing includes ap-beijing and ap-beijing-1.
                     * @return CosBucketRegion COS region. Note: Beijing includes ap-beijing and ap-beijing-1.
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置COS region. Note: Beijing includes ap-beijing and ap-beijing-1.
                     * @param _cosBucketRegion COS region. Note: Beijing includes ap-beijing and ap-beijing-1.
                     * 
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     * 
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取Whether to install dependencies automatically
                     * @return InstallDependency Whether to install dependencies automatically
                     * 
                     */
                    std::string GetInstallDependency() const;

                    /**
                     * 设置Whether to install dependencies automatically
                     * @param _installDependency Whether to install dependencies automatically
                     * 
                     */
                    void SetInstallDependency(const std::string& _installDependency);

                    /**
                     * 判断参数 InstallDependency 是否已赋值
                     * @return InstallDependency 是否已赋值
                     * 
                     */
                    bool InstallDependencyHasBeenSet() const;

                    /**
                     * 获取Function environment
                     * @return EnvId Function environment
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Function environment
                     * @param _envId Function environment
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取It specifies whether to synchronously release a new version during the update. The default value is `FALSE`, indicating not to release a new version.
                     * @return Publish It specifies whether to synchronously release a new version during the update. The default value is `FALSE`, indicating not to release a new version.
                     * 
                     */
                    std::string GetPublish() const;

                    /**
                     * 设置It specifies whether to synchronously release a new version during the update. The default value is `FALSE`, indicating not to release a new version.
                     * @param _publish It specifies whether to synchronously release a new version during the update. The default value is `FALSE`, indicating not to release a new version.
                     * 
                     */
                    void SetPublish(const std::string& _publish);

                    /**
                     * 判断参数 Publish 是否已赋值
                     * @return Publish 是否已赋值
                     * 
                     */
                    bool PublishHasBeenSet() const;

                    /**
                     * 获取Function code
                     * @return Code Function code
                     * 
                     */
                    Code GetCode() const;

                    /**
                     * 设置Function code
                     * @param _code Function code
                     * 
                     */
                    void SetCode(const Code& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Code source. Valid values: ZipFile, Cos, Inline
                     * @return CodeSource Code source. Valid values: ZipFile, Cos, Inline
                     * 
                     */
                    std::string GetCodeSource() const;

                    /**
                     * 设置Code source. Valid values: ZipFile, Cos, Inline
                     * @param _codeSource Code source. Valid values: ZipFile, Cos, Inline
                     * 
                     */
                    void SetCodeSource(const std::string& _codeSource);

                    /**
                     * 判断参数 CodeSource 是否已赋值
                     * @return CodeSource 是否已赋值
                     * 
                     */
                    bool CodeSourceHasBeenSet() const;

                private:

                    /**
                     * Name of the function to be modified
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function handler name, which is in the `file name.function name` form. Use a period (.) to separate a file name and function name. The file name and function name must start and end with letters and contain 2-60 characters, including letters, digits, underscores (_), and hyphens (-).
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * COS bucket name
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * COS object path
                     */
                    std::string m_cosObjectName;
                    bool m_cosObjectNameHasBeenSet;

                    /**
                     * It contains a function code file and its dependencies in the ZIP format. When you use this API, the ZIP file needs to be encoded with Base64. Up to 20 MB is supported.
                     */
                    std::string m_zipFile;
                    bool m_zipFileHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * COS region. Note: Beijing includes ap-beijing and ap-beijing-1.
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * Whether to install dependencies automatically
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * Function environment
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * It specifies whether to synchronously release a new version during the update. The default value is `FALSE`, indicating not to release a new version.
                     */
                    std::string m_publish;
                    bool m_publishHasBeenSet;

                    /**
                     * Function code
                     */
                    Code m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Code source. Valid values: ZipFile, Cos, Inline
                     */
                    std::string m_codeSource;
                    bool m_codeSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCODEREQUEST_H_
