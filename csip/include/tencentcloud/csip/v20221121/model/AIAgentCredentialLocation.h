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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIALLOCATION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIALLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AIAgent asset credential position
                */
                class AIAgentCredentialLocation : public AbstractModel
                {
                public:
                    AIAgentCredentialLocation();
                    ~AIAgentCredentialLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceID <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceID <p>Instance ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>Container ID</p>
                     * @return ContainerID <p>Container ID</p>
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置<p>Container ID</p>
                     * @param _containerID <p>Container ID</p>
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取<p>Credential path</p>
                     * @return Path <p>Credential path</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Credential path</p>
                     * @param _path <p>Credential path</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Row number where the credential resides</p>
                     * @return Line <p>Row number where the credential resides</p>
                     * 
                     */
                    int64_t GetLine() const;

                    /**
                     * 设置<p>Row number where the credential resides</p>
                     * @param _line <p>Row number where the credential resides</p>
                     * 
                     */
                    void SetLine(const int64_t& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取<p>Credential masking fragment</p>
                     * @return Content <p>Credential masking fragment</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Credential masking fragment</p>
                     * @param _content <p>Credential masking fragment</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Whether the credential is managed</p><p>Enumeration values:</p><ul><li>1: Managed</li><li>0: Unhosted</li></ul>
                     * @return Status <p>Whether the credential is managed</p><p>Enumeration values:</p><ul><li>1: Managed</li><li>0: Unhosted</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Whether the credential is managed</p><p>Enumeration values:</p><ul><li>1: Managed</li><li>0: Unhosted</li></ul>
                     * @param _status <p>Whether the credential is managed</p><p>Enumeration values:</p><ul><li>1: Managed</li><li>0: Unhosted</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Hosted credential ID</p>
                     * @return DelegateID <p>Hosted credential ID</p>
                     * 
                     */
                    int64_t GetDelegateID() const;

                    /**
                     * 设置<p>Hosted credential ID</p>
                     * @param _delegateID <p>Hosted credential ID</p>
                     * 
                     */
                    void SetDelegateID(const int64_t& _delegateID);

                    /**
                     * 判断参数 DelegateID 是否已赋值
                     * @return DelegateID 是否已赋值
                     * 
                     */
                    bool DelegateIDHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Container ID</p>
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * <p>Credential path</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Row number where the credential resides</p>
                     */
                    int64_t m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * <p>Credential masking fragment</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Whether the credential is managed</p><p>Enumeration values:</p><ul><li>1: Managed</li><li>0: Unhosted</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Hosted credential ID</p>
                     */
                    int64_t m_delegateID;
                    bool m_delegateIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIALLOCATION_H_
