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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_DELETETEMPLATESTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_DELETETEMPLATESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * Template deletion response
                */
                class DeleteTemplateStatus : public AbstractModel
                {
                public:
                    DeleteTemplateStatus();
                    ~DeleteTemplateStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deletion status information.
                     * @return DeleteStatus Deletion status information.
                     * 
                     */
                    std::string GetDeleteStatus() const;

                    /**
                     * 设置Deletion status information.
                     * @param _deleteStatus Deletion status information.
                     * 
                     */
                    void SetDeleteStatus(const std::string& _deleteStatus);

                    /**
                     * 判断参数 DeleteStatus 是否已赋值
                     * @return DeleteStatus 是否已赋值
                     * 
                     */
                    bool DeleteStatusHasBeenSet() const;

                    /**
                     * 获取Deletion time in seconds in the format of UNIX timestamp.
                     * @return DeleteTime Deletion time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 设置Deletion time in seconds in the format of UNIX timestamp.
                     * @param _deleteTime Deletion time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    void SetDeleteTime(const uint64_t& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                private:

                    /**
                     * Deletion status information.
                     */
                    std::string m_deleteStatus;
                    bool m_deleteStatusHasBeenSet;

                    /**
                     * Deletion time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_DELETETEMPLATESTATUS_H_
