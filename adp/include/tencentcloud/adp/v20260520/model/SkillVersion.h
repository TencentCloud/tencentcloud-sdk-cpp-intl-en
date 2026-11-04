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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillAnalysisInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SkillVersion version information.
                */
                class SkillVersion : public AbstractModel
                {
                public:
                    SkillVersion();
                    ~SkillVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Detection information</p>
                     * @return AnalysisInfo <p>Detection information</p>
                     * 
                     */
                    SkillAnalysisInfo GetAnalysisInfo() const;

                    /**
                     * 设置<p>Detection information</p>
                     * @param _analysisInfo <p>Detection information</p>
                     * 
                     */
                    void SetAnalysisInfo(const SkillAnalysisInfo& _analysisInfo);

                    /**
                     * 判断参数 AnalysisInfo 是否已赋值
                     * @return AnalysisInfo 是否已赋值
                     * 
                     */
                    bool AnalysisInfoHasBeenSet() const;

                    /**
                     * 获取<p>Current effective version number.</p>
                     * @return Version <p>Current effective version number.</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>Current effective version number.</p>
                     * @param _version <p>Current effective version number.</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>Current effective version ID</p>
                     * @return VersionId <p>Current effective version ID</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>Current effective version ID</p>
                     * @param _versionId <p>Current effective version ID</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Skill version RELEASE process status:</p><pre><code>  - 0 INITIALIZED      initialization (initial version state)  - 1 AUDITING         under review (f_analysis_status ∈ {PENDING, RUNNING})  - 2 PENDING_RELEASE  awaiting RELEASE (low/medium-risk, waiting for user confirmation to publish)  - 3 RELEASED         RELEASED  - 4 UNRELEASED       not RELEASED (HIGH / UNAVAILABLE / FAILED / user give up, including the semantics of historical "not approved")Decoupled from SkillAnalysisStatus: the former is the RELEASE lifecycle from the user perspective, while the latter is the security detection stage.</code></pre>
                     * @return VersionStatus <p>Skill version RELEASE process status:</p><pre><code>  - 0 INITIALIZED      initialization (initial version state)  - 1 AUDITING         under review (f_analysis_status ∈ {PENDING, RUNNING})  - 2 PENDING_RELEASE  awaiting RELEASE (low/medium-risk, waiting for user confirmation to publish)  - 3 RELEASED         RELEASED  - 4 UNRELEASED       not RELEASED (HIGH / UNAVAILABLE / FAILED / user give up, including the semantics of historical "not approved")Decoupled from SkillAnalysisStatus: the former is the RELEASE lifecycle from the user perspective, while the latter is the security detection stage.</code></pre>
                     * 
                     */
                    int64_t GetVersionStatus() const;

                    /**
                     * 设置<p>Skill version RELEASE process status:</p><pre><code>  - 0 INITIALIZED      initialization (initial version state)  - 1 AUDITING         under review (f_analysis_status ∈ {PENDING, RUNNING})  - 2 PENDING_RELEASE  awaiting RELEASE (low/medium-risk, waiting for user confirmation to publish)  - 3 RELEASED         RELEASED  - 4 UNRELEASED       not RELEASED (HIGH / UNAVAILABLE / FAILED / user give up, including the semantics of historical "not approved")Decoupled from SkillAnalysisStatus: the former is the RELEASE lifecycle from the user perspective, while the latter is the security detection stage.</code></pre>
                     * @param _versionStatus <p>Skill version RELEASE process status:</p><pre><code>  - 0 INITIALIZED      initialization (initial version state)  - 1 AUDITING         under review (f_analysis_status ∈ {PENDING, RUNNING})  - 2 PENDING_RELEASE  awaiting RELEASE (low/medium-risk, waiting for user confirmation to publish)  - 3 RELEASED         RELEASED  - 4 UNRELEASED       not RELEASED (HIGH / UNAVAILABLE / FAILED / user give up, including the semantics of historical "not approved")Decoupled from SkillAnalysisStatus: the former is the RELEASE lifecycle from the user perspective, while the latter is the security detection stage.</code></pre>
                     * 
                     */
                    void SetVersionStatus(const int64_t& _versionStatus);

                    /**
                     * 判断参数 VersionStatus 是否已赋值
                     * @return VersionStatus 是否已赋值
                     * 
                     */
                    bool VersionStatusHasBeenSet() const;

                    /**
                     * 获取<p>md5 information of the Skill package</p>
                     * @return SkillMd5 <p>md5 information of the Skill package</p>
                     * 
                     */
                    std::string GetSkillMd5() const;

                    /**
                     * 设置<p>md5 information of the Skill package</p>
                     * @param _skillMd5 <p>md5 information of the Skill package</p>
                     * 
                     */
                    void SetSkillMd5(const std::string& _skillMd5);

                    /**
                     * 判断参数 SkillMd5 是否已赋值
                     * @return SkillMd5 是否已赋值
                     * 
                     */
                    bool SkillMd5HasBeenSet() const;

                    /**
                     * 获取<p>Version package address</p>
                     * @return SkillUrl <p>Version package address</p>
                     * 
                     */
                    std::string GetSkillUrl() const;

                    /**
                     * 设置<p>Version package address</p>
                     * @param _skillUrl <p>Version package address</p>
                     * 
                     */
                    void SetSkillUrl(const std::string& _skillUrl);

                    /**
                     * 判断参数 SkillUrl 是否已赋值
                     * @return SkillUrl 是否已赋值
                     * 
                     */
                    bool SkillUrlHasBeenSet() const;

                    /**
                     * 获取<p>Version creation time (Unix seconds).</p>
                     * @return CreateTime <p>Version creation time (Unix seconds).</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Version creation time (Unix seconds).</p>
                     * @param _createTime <p>Version creation time (Unix seconds).</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>skill md document</p>
                     * @return SkillMarkdownUrl <p>skill md document</p>
                     * 
                     */
                    std::string GetSkillMarkdownUrl() const;

                    /**
                     * 设置<p>skill md document</p>
                     * @param _skillMarkdownUrl <p>skill md document</p>
                     * 
                     */
                    void SetSkillMarkdownUrl(const std::string& _skillMarkdownUrl);

                    /**
                     * 判断参数 SkillMarkdownUrl 是否已赋值
                     * @return SkillMarkdownUrl 是否已赋值
                     * 
                     */
                    bool SkillMarkdownUrlHasBeenSet() const;

                    /**
                     * 获取<p>Version change description</p>
                     * @return UpdateDesc <p>Version change description</p>
                     * 
                     */
                    std::string GetUpdateDesc() const;

                    /**
                     * 设置<p>Version change description</p>
                     * @param _updateDesc <p>Version change description</p>
                     * 
                     */
                    void SetUpdateDesc(const std::string& _updateDesc);

                    /**
                     * 判断参数 UpdateDesc 是否已赋值
                     * @return UpdateDesc 是否已赋值
                     * 
                     */
                    bool UpdateDescHasBeenSet() const;

                    /**
                     * 获取<p>Change user.</p>
                     * @return Updater <p>Change user.</p>
                     * 
                     */
                    std::string GetUpdater() const;

                    /**
                     * 设置<p>Change user.</p>
                     * @param _updater <p>Change user.</p>
                     * 
                     */
                    void SetUpdater(const std::string& _updater);

                    /**
                     * 判断参数 Updater 是否已赋值
                     * @return Updater 是否已赋值
                     * 
                     */
                    bool UpdaterHasBeenSet() const;

                private:

                    /**
                     * <p>Detection information</p>
                     */
                    SkillAnalysisInfo m_analysisInfo;
                    bool m_analysisInfoHasBeenSet;

                    /**
                     * <p>Current effective version number.</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Current effective version ID</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>Skill version RELEASE process status:</p><pre><code>  - 0 INITIALIZED      initialization (initial version state)  - 1 AUDITING         under review (f_analysis_status ∈ {PENDING, RUNNING})  - 2 PENDING_RELEASE  awaiting RELEASE (low/medium-risk, waiting for user confirmation to publish)  - 3 RELEASED         RELEASED  - 4 UNRELEASED       not RELEASED (HIGH / UNAVAILABLE / FAILED / user give up, including the semantics of historical "not approved")Decoupled from SkillAnalysisStatus: the former is the RELEASE lifecycle from the user perspective, while the latter is the security detection stage.</code></pre>
                     */
                    int64_t m_versionStatus;
                    bool m_versionStatusHasBeenSet;

                    /**
                     * <p>md5 information of the Skill package</p>
                     */
                    std::string m_skillMd5;
                    bool m_skillMd5HasBeenSet;

                    /**
                     * <p>Version package address</p>
                     */
                    std::string m_skillUrl;
                    bool m_skillUrlHasBeenSet;

                    /**
                     * <p>Version creation time (Unix seconds).</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>skill md document</p>
                     */
                    std::string m_skillMarkdownUrl;
                    bool m_skillMarkdownUrlHasBeenSet;

                    /**
                     * <p>Version change description</p>
                     */
                    std::string m_updateDesc;
                    bool m_updateDescHasBeenSet;

                    /**
                     * <p>Change user.</p>
                     */
                    std::string m_updater;
                    bool m_updaterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_
