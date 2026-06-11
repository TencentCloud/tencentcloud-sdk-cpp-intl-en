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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGVERSIONREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGVERSIONREQUEST_H_

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
                * CreateMNGVersion request structure.
                */
                class CreateMNGVersionRequest : public AbstractModel
                {
                public:
                    CreateMNGVersionRequest();
                    ~CreateMNGVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Mini game appid.</p>
                     * @return MNPId <p>Mini game appid.</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini game appid.</p>
                     * @param _mNPId <p>Mini game appid.</p>
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
                     * 获取<p>Version number.</p>
                     * @return MNPVersion <p>Version number.</p>
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置<p>Version number.</p>
                     * @param _mNPVersion <p>Version number.</p>
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
                     * 获取<p>URL of the mini game file exported from the IDE and uploaded to the file server.<p>
                     * @return FileUrl <p>URL of the mini game file exported from the IDE and uploaded to the file server.<p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>URL of the mini game file exported from the IDE and uploaded to the file server.<p>
                     * @param _fileUrl <p>URL of the mini game file exported from the IDE and uploaded to the file server.<p>
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
                     * 获取<p>Platform ID.</p>
                     * @return PlatformId <p>Platform ID.</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID.</p>
                     * @param _platformId <p>Platform ID.</p>
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
                     * 获取<p>Version description.</p>
                     * @return MNPVersionIntro <p>Version description.</p>
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置<p>Version description.</p>
                     * @param _mNPVersionIntro <p>Version description.</p>
                     * 
                     */
                    void SetMNPVersionIntro(const std::string& _mNPVersionIntro);

                    /**
                     * 判断参数 MNPVersionIntro 是否已赋值
                     * @return MNPVersionIntro 是否已赋值
                     * 
                     */
                    bool MNPVersionIntroHasBeenSet() const;

                    /**
                     * 获取<p>Version type. Valid values: 1: Debug; 2: Development. Default value: 2.</p>
                     * @return VersionType <p>Version type. Valid values: 1: Debug; 2: Development. Default value: 2.</p>
                     * 
                     */
                    int64_t GetVersionType() const;

                    /**
                     * 设置<p>Version type. Valid values: 1: Debug; 2: Development. Default value: 2.</p>
                     * @param _versionType <p>Version type. Valid values: 1: Debug; 2: Development. Default value: 2.</p>
                     * 
                     */
                    void SetVersionType(const int64_t& _versionType);

                    /**
                     * 判断参数 VersionType 是否已赋值
                     * @return VersionType 是否已赋值
                     * 
                     */
                    bool VersionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Compilation condition.</p>
                     * @return CompileCondition <p>Compilation condition.</p>
                     * 
                     */
                    std::string GetCompileCondition() const;

                    /**
                     * 设置<p>Compilation condition.</p>
                     * @param _compileCondition <p>Compilation condition.</p>
                     * 
                     */
                    void SetCompileCondition(const std::string& _compileCondition);

                    /**
                     * 判断参数 CompileCondition 是否已赋值
                     * @return CompileCondition 是否已赋值
                     * 
                     */
                    bool CompileConditionHasBeenSet() const;

                    /**
                     * 获取<p>Compilation configuration.</p>
                     * @return CompileConfig <p>Compilation configuration.</p>
                     * 
                     */
                    std::string GetCompileConfig() const;

                    /**
                     * 设置<p>Compilation configuration.</p>
                     * @param _compileConfig <p>Compilation configuration.</p>
                     * 
                     */
                    void SetCompileConfig(const std::string& _compileConfig);

                    /**
                     * 判断参数 CompileConfig 是否已赋值
                     * @return CompileConfig 是否已赋值
                     * 
                     */
                    bool CompileConfigHasBeenSet() const;

                    /**
                     * 获取<p>CI/CD key ID.</p>
                     * @return PipelineId <p>CI/CD key ID.</p>
                     * 
                     */
                    std::string GetPipelineId() const;

                    /**
                     * 设置<p>CI/CD key ID.</p>
                     * @param _pipelineId <p>CI/CD key ID.</p>
                     * 
                     */
                    void SetPipelineId(const std::string& _pipelineId);

                    /**
                     * 判断参数 PipelineId 是否已赋值
                     * @return PipelineId 是否已赋值
                     * 
                     */
                    bool PipelineIdHasBeenSet() const;

                    /**
                     * 获取<p>Internal file URL.</p>
                     * @return FileInnerUrl <p>Internal file URL.</p>
                     * 
                     */
                    std::string GetFileInnerUrl() const;

                    /**
                     * 设置<p>Internal file URL.</p>
                     * @param _fileInnerUrl <p>Internal file URL.</p>
                     * 
                     */
                    void SetFileInnerUrl(const std::string& _fileInnerUrl);

                    /**
                     * 判断参数 FileInnerUrl 是否已赋值
                     * @return FileInnerUrl 是否已赋值
                     * 
                     */
                    bool FileInnerUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Mini game appid.</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Version number.</p>
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * <p>URL of the mini game file exported from the IDE and uploaded to the file server.<p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>Platform ID.</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Version description.</p>
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * <p>Version type. Valid values: 1: Debug; 2: Development. Default value: 2.</p>
                     */
                    int64_t m_versionType;
                    bool m_versionTypeHasBeenSet;

                    /**
                     * <p>Compilation condition.</p>
                     */
                    std::string m_compileCondition;
                    bool m_compileConditionHasBeenSet;

                    /**
                     * <p>Compilation configuration.</p>
                     */
                    std::string m_compileConfig;
                    bool m_compileConfigHasBeenSet;

                    /**
                     * <p>CI/CD key ID.</p>
                     */
                    std::string m_pipelineId;
                    bool m_pipelineIdHasBeenSet;

                    /**
                     * <p>Internal file URL.</p>
                     */
                    std::string m_fileInnerUrl;
                    bool m_fileInnerUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGVERSIONREQUEST_H_
