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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Attachment information 
                */
                class AttachDetail : public AbstractModel
                {
                public:
                    AttachDetail();
                    ~AttachDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of elastic cloud disks attached to the instance
                     * @return AttachedDiskCount Number of elastic cloud disks attached to the instance
                     * 
                     */
                    int64_t GetAttachedDiskCount() const;

                    /**
                     * 设置Number of elastic cloud disks attached to the instance
                     * @param _attachedDiskCount Number of elastic cloud disks attached to the instance
                     * 
                     */
                    void SetAttachedDiskCount(const int64_t& _attachedDiskCount);

                    /**
                     * 判断参数 AttachedDiskCount 是否已赋值
                     * @return AttachedDiskCount 是否已赋值
                     * 
                     */
                    bool AttachedDiskCountHasBeenSet() const;

                    /**
                     * 获取Upper limit of attached elastic cloud disks
                     * @return MaxAttachCount Upper limit of attached elastic cloud disks
                     * 
                     */
                    int64_t GetMaxAttachCount() const;

                    /**
                     * 设置Upper limit of attached elastic cloud disks
                     * @param _maxAttachCount Upper limit of attached elastic cloud disks
                     * 
                     */
                    void SetMaxAttachCount(const int64_t& _maxAttachCount);

                    /**
                     * 判断参数 MaxAttachCount 是否已赋值
                     * @return MaxAttachCount 是否已赋值
                     * 
                     */
                    bool MaxAttachCountHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of elastic cloud disks attached to the instance
                     */
                    int64_t m_attachedDiskCount;
                    bool m_attachedDiskCountHasBeenSet;

                    /**
                     * Upper limit of attached elastic cloud disks
                     */
                    int64_t m_maxAttachCount;
                    bool m_maxAttachCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHDETAIL_H_
