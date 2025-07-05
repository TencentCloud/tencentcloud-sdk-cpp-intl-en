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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATECONSOLEMNPVERSIONCOMPILETASKREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATECONSOLEMNPVERSIONCOMPILETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * CreateConsoleMNPVersionCompileTask request structure.
                */
                class CreateConsoleMNPVersionCompileTaskRequest : public AbstractModel
                {
                public:
                    CreateConsoleMNPVersionCompileTaskRequest();
                    ~CreateConsoleMNPVersionCompileTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mini program ID
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
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
                     * 获取Version
                     * @return MNPVersion Version
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置Version
                     * @param _mNPVersion Version
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
                     * 获取External URL of the document
                     * @return FileUrl External URL of the document
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置External URL of the document
                     * @param _fileUrl External URL of the document
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
                     * 获取Internal URL of the document
                     * @return FileInnerUrl Internal URL of the document
                     * 
                     */
                    std::string GetFileInnerUrl() const;

                    /**
                     * 设置Internal URL of the document
                     * @param _fileInnerUrl Internal URL of the document
                     * 
                     */
                    void SetFileInnerUrl(const std::string& _fileInnerUrl);

                    /**
                     * 判断参数 FileInnerUrl 是否已赋值
                     * @return FileInnerUrl 是否已赋值
                     * 
                     */
                    bool FileInnerUrlHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
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
                     * 获取Type 2 Version
                     * @return TaskType Type 2 Version
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Type 2 Version
                     * @param _taskType Type 2 Version
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Version introduction
                     * @return MNPVersionIntro Version introduction
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置Version introduction
                     * @param _mNPVersionIntro Version introduction
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
                     * 获取Version description
                     * @return MNPVersionDesc Version description
                     * 
                     */
                    std::string GetMNPVersionDesc() const;

                    /**
                     * 设置Version description
                     * @param _mNPVersionDesc Version description
                     * 
                     */
                    void SetMNPVersionDesc(const std::string& _mNPVersionDesc);

                    /**
                     * 判断参数 MNPVersionDesc 是否已赋值
                     * @return MNPVersionDesc 是否已赋值
                     * 
                     */
                    bool MNPVersionDescHasBeenSet() const;

                    /**
                     * 获取Type 1 Unencrypted 2 Encrypted 3 Source
                     * @return SourceType Type 1 Unencrypted 2 Encrypted 3 Source
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置Type 1 Unencrypted 2 Encrypted 3 Source
                     * @param _sourceType Type 1 Unencrypted 2 Encrypted 3 Source
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Upload platform 1- TCMPP 2 WeChat 3. TCMPP + WeChat
                     * @return ReleaseChannel Upload platform 1- TCMPP 2 WeChat 3. TCMPP + WeChat
                     * 
                     */
                    int64_t GetReleaseChannel() const;

                    /**
                     * 设置Upload platform 1- TCMPP 2 WeChat 3. TCMPP + WeChat
                     * @param _releaseChannel Upload platform 1- TCMPP 2 WeChat 3. TCMPP + WeChat
                     * 
                     */
                    void SetReleaseChannel(const int64_t& _releaseChannel);

                    /**
                     * 判断参数 ReleaseChannel 是否已赋值
                     * @return ReleaseChannel 是否已赋值
                     * 
                     */
                    bool ReleaseChannelHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * External URL of the document
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Internal URL of the document
                     */
                    std::string m_fileInnerUrl;
                    bool m_fileInnerUrlHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Type 2 Version
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Version introduction
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * Version description
                     */
                    std::string m_mNPVersionDesc;
                    bool m_mNPVersionDescHasBeenSet;

                    /**
                     * Type 1 Unencrypted 2 Encrypted 3 Source
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Upload platform 1- TCMPP 2 WeChat 3. TCMPP + WeChat
                     */
                    int64_t m_releaseChannel;
                    bool m_releaseChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATECONSOLEMNPVERSIONCOMPILETASKREQUEST_H_
