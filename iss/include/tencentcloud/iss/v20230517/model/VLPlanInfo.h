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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/CallbackURL.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Visual understanding plan information
                */
                class VLPlanInfo : public AbstractModel
                {
                public:
                    VLPlanInfo();
                    ~VLPlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Plan ID</p>
                     * @return VLPlanId <p>Plan ID</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>Plan ID</p>
                     * @param _vLPlanId <p>Plan ID</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>Plan name.</p>
                     * @return Name <p>Plan name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Plan name.</p>
                     * @param _name <p>Plan name.</p>
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
                     * 获取<p>Plan description.</p>
                     * @return Describe <p>Plan description.</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>Plan description.</p>
                     * @param _describe <p>Plan description.</p>
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>ID of the visual understanding template</p>
                     * @return VLTemplateId <p>ID of the visual understanding template</p>
                     * 
                     */
                    std::string GetVLTemplateId() const;

                    /**
                     * 设置<p>ID of the visual understanding template</p>
                     * @param _vLTemplateId <p>ID of the visual understanding template</p>
                     * 
                     */
                    void SetVLTemplateId(const std::string& _vLTemplateId);

                    /**
                     * 判断参数 VLTemplateId 是否已赋值
                     * @return VLTemplateId 是否已赋值
                     * 
                     */
                    bool VLTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Callback notification configuration</p>
                     * @return Callback <p>Callback notification configuration</p>
                     * 
                     */
                    CallbackURL GetCallback() const;

                    /**
                     * 设置<p>Callback notification configuration</p>
                     * @param _callback <p>Callback notification configuration</p>
                     * 
                     */
                    void SetCallback(const CallbackURL& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取<p>File expiration time (seconds)</p>
                     * @return FileExpires <p>File expiration time (seconds)</p>
                     * 
                     */
                    int64_t GetFileExpires() const;

                    /**
                     * 设置<p>File expiration time (seconds)</p>
                     * @param _fileExpires <p>File expiration time (seconds)</p>
                     * 
                     */
                    void SetFileExpires(const int64_t& _fileExpires);

                    /**
                     * 判断参数 FileExpires 是否已赋值
                     * @return FileExpires 是否已赋值
                     * 
                     */
                    bool FileExpiresHasBeenSet() const;

                    /**
                     * 获取<p>Number of channels included in the plan</p>
                     * @return ChannelCount <p>Number of channels included in the plan</p>
                     * 
                     */
                    int64_t GetChannelCount() const;

                    /**
                     * 设置<p>Number of channels included in the plan</p>
                     * @param _channelCount <p>Number of channels included in the plan</p>
                     * 
                     */
                    void SetChannelCount(const int64_t& _channelCount);

                    /**
                     * 判断参数 ChannelCount 是否已赋值
                     * @return ChannelCount 是否已赋值
                     * 
                     */
                    bool ChannelCountHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreatedAt <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createdAt <p>Creation time.</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Last update time</p>
                     * @return UpdatedAt <p>Last update time</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>Last update time</p>
                     * @param _updatedAt <p>Last update time</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>Plan ID</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                    /**
                     * <p>Plan name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Plan description.</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>ID of the visual understanding template</p>
                     */
                    std::string m_vLTemplateId;
                    bool m_vLTemplateIdHasBeenSet;

                    /**
                     * <p>Callback notification configuration</p>
                     */
                    CallbackURL m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * <p>File expiration time (seconds)</p>
                     */
                    int64_t m_fileExpires;
                    bool m_fileExpiresHasBeenSet;

                    /**
                     * <p>Number of channels included in the plan</p>
                     */
                    int64_t m_channelCount;
                    bool m_channelCountHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Last update time</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANINFO_H_
