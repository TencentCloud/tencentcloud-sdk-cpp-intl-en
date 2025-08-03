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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_IDDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_IDDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Object containing only ID
                */
                class IdDTO : public AbstractModel
                {
                public:
                    IdDTO();
                    ~IdDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessKey key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessKey key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranId Transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置Transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tranId Transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取Transaction status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranStatus Transaction status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTranStatus() const;

                    /**
                     * 设置Transaction status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tranStatus Transaction status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranStatus(const int64_t& _tranStatus);

                    /**
                     * 判断参数 TranStatus 是否已赋值
                     * @return TranStatus 是否已赋值
                     * 
                     */
                    bool TranStatusHasBeenSet() const;

                private:

                    /**
                     * Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * Transaction status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_IDDTO_H_
