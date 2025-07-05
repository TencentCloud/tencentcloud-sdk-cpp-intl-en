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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDATA_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Recipient group data type
                */
                class ReceiverData : public AbstractModel
                {
                public:
                    ReceiverData();
                    ~ReceiverData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recipient group ID
                     * @return ReceiverId Recipient group ID
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置Recipient group ID
                     * @param _receiverId Recipient group ID
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取Recipient group name
                     * @return ReceiversName Recipient group name
                     * 
                     */
                    std::string GetReceiversName() const;

                    /**
                     * 设置Recipient group name
                     * @param _receiversName Recipient group name
                     * 
                     */
                    void SetReceiversName(const std::string& _receiversName);

                    /**
                     * 判断参数 ReceiversName 是否已赋值
                     * @return ReceiversName 是否已赋值
                     * 
                     */
                    bool ReceiversNameHasBeenSet() const;

                    /**
                     * 获取Total number of recipient email addresses
                     * @return Count Total number of recipient email addresses
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Total number of recipient email addresses
                     * @param _count Total number of recipient email addresses
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Recipient group description
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Desc Recipient group description
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Recipient group description
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param _desc Recipient group description
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Group status (`1`: to be uploaded; `2` uploading; `3` uploaded)
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return ReceiversStatus Group status (`1`: to be uploaded; `2` uploading; `3` uploaded)
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetReceiversStatus() const;

                    /**
                     * 设置Group status (`1`: to be uploaded; `2` uploading; `3` uploaded)
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param _receiversStatus Group status (`1`: to be uploaded; `2` uploading; `3` uploaded)
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetReceiversStatus(const uint64_t& _receiversStatus);

                    /**
                     * 判断参数 ReceiversStatus 是否已赋值
                     * @return ReceiversStatus 是否已赋值
                     * 
                     */
                    bool ReceiversStatusHasBeenSet() const;

                    /**
                     * 获取Creation time, such as 2021-09-28 16:40:35
                     * @return CreateTime Creation time, such as 2021-09-28 16:40:35
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, such as 2021-09-28 16:40:35
                     * @param _createTime Creation time, such as 2021-09-28 16:40:35
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Recipient group ID
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * Recipient group name
                     */
                    std::string m_receiversName;
                    bool m_receiversNameHasBeenSet;

                    /**
                     * Total number of recipient email addresses
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Recipient group description
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Group status (`1`: to be uploaded; `2` uploading; `3` uploaded)
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_receiversStatus;
                    bool m_receiversStatusHasBeenSet;

                    /**
                     * Creation time, such as 2021-09-28 16:40:35
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDATA_H_
