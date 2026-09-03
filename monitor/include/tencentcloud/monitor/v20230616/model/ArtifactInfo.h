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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_ARTIFACTINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_ARTIFACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Product entity
                */
                class ArtifactInfo : public AbstractModel
                {
                public:
                    ArtifactInfo();
                    ~ArtifactInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Product ID</p>
                     * @return ArtifactId <p>Product ID</p>
                     * 
                     */
                    std::string GetArtifactId() const;

                    /**
                     * 设置<p>Product ID</p>
                     * @param _artifactId <p>Product ID</p>
                     * 
                     */
                    void SetArtifactId(const std::string& _artifactId);

                    /**
                     * 判断参数 ArtifactId 是否已赋值
                     * @return ArtifactId 是否已赋值
                     * 
                     */
                    bool ArtifactIdHasBeenSet() const;

                    /**
                     * 获取<p>Product name</p>
                     * @return Name <p>Product name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Product name</p>
                     * @param _name <p>Product name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Physical type</p>
                     * @return MimeType <p>Physical type</p>
                     * 
                     */
                    std::string GetMimeType() const;

                    /**
                     * 设置<p>Physical type</p>
                     * @param _mimeType <p>Physical type</p>
                     * 
                     */
                    void SetMimeType(const std::string& _mimeType);

                    /**
                     * 判断参数 MimeType 是否已赋值
                     * @return MimeType 是否已赋值
                     * 
                     */
                    bool MimeTypeHasBeenSet() const;

                    /**
                     * 获取<p>File size (byte)</p>
                     * @return SizeBytes <p>File size (byte)</p>
                     * 
                     */
                    int64_t GetSizeBytes() const;

                    /**
                     * 设置<p>File size (byte)</p>
                     * @param _sizeBytes <p>File size (byte)</p>
                     * 
                     */
                    void SetSizeBytes(const int64_t& _sizeBytes);

                    /**
                     * 判断参数 SizeBytes 是否已赋值
                     * @return SizeBytes 是否已赋值
                     * 
                     */
                    bool SizeBytesHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is public</p>
                     * @return IsGlobal <p>Whether it is public</p>
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置<p>Whether it is public</p>
                     * @param _isGlobal <p>Whether it is public</p>
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取<p>Creation time (Unix timestamp in seconds).</p>
                     * @return CreatedAt <p>Creation time (Unix timestamp in seconds).</p>
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 设置<p>Creation time (Unix timestamp in seconds).</p>
                     * @param _createdAt <p>Creation time (Unix timestamp in seconds).</p>
                     * 
                     */
                    void SetCreatedAt(const int64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Modification time.</p>
                     * @return UpdatedAt <p>Modification time.</p>
                     * 
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置<p>Modification time.</p>
                     * @param _updatedAt <p>Modification time.</p>
                     * 
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Agent ID that generated the artifact</p>
                     * @return AgentId <p>Agent ID that generated the artifact</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent ID that generated the artifact</p>
                     * @param _agentId <p>Agent ID that generated the artifact</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>Skill ID that generates the artifact</p>
                     * @return SkillId <p>Skill ID that generates the artifact</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>Skill ID that generates the artifact</p>
                     * @param _skillId <p>Skill ID that generates the artifact</p>
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取<p>For parsing calls to the download API</p>
                     * @return StoragePath <p>For parsing calls to the download API</p>
                     * 
                     */
                    std::string GetStoragePath() const;

                    /**
                     * 设置<p>For parsing calls to the download API</p>
                     * @param _storagePath <p>For parsing calls to the download API</p>
                     * 
                     */
                    void SetStoragePath(const std::string& _storagePath);

                    /**
                     * 判断参数 StoragePath 是否已赋值
                     * @return StoragePath 是否已赋值
                     * 
                     */
                    bool StoragePathHasBeenSet() const;

                private:

                    /**
                     * <p>Product ID</p>
                     */
                    std::string m_artifactId;
                    bool m_artifactIdHasBeenSet;

                    /**
                     * <p>Product name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Physical type</p>
                     */
                    std::string m_mimeType;
                    bool m_mimeTypeHasBeenSet;

                    /**
                     * <p>File size (byte)</p>
                     */
                    int64_t m_sizeBytes;
                    bool m_sizeBytesHasBeenSet;

                    /**
                     * <p>Whether it is public</p>
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>Creation time (Unix timestamp in seconds).</p>
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Modification time.</p>
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>Agent ID that generated the artifact</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Skill ID that generates the artifact</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>For parsing calls to the download API</p>
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_ARTIFACTINFO_H_
