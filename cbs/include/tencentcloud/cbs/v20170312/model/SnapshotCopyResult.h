/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTCOPYRESULT_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTCOPYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Result of the cross-region replication task
                */
                class SnapshotCopyResult : public AbstractModel
                {
                public:
                    SnapshotCopyResult();
                    ~SnapshotCopyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the snapshot replica
                     * @return SnapshotId ID of the snapshot replica
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置ID of the snapshot replica
                     * @param _snapshotId ID of the snapshot replica
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Error message. It’s null if the request succeeds.
                     * @return Message Error message. It’s null if the request succeeds.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message. It’s null if the request succeeds.
                     * @param _message Error message. It’s null if the request succeeds.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Error code. It’s `Success` if the request succeeds.
                     * @return Code Error code. It’s `Success` if the request succeeds.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Error code. It’s `Success` if the request succeeds.
                     * @param _code Error code. It’s `Success` if the request succeeds.
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Destination region of the replication task
                     * @return DestinationRegion Destination region of the replication task
                     * 
                     */
                    std::string GetDestinationRegion() const;

                    /**
                     * 设置Destination region of the replication task
                     * @param _destinationRegion Destination region of the replication task
                     * 
                     */
                    void SetDestinationRegion(const std::string& _destinationRegion);

                    /**
                     * 判断参数 DestinationRegion 是否已赋值
                     * @return DestinationRegion 是否已赋值
                     * 
                     */
                    bool DestinationRegionHasBeenSet() const;

                private:

                    /**
                     * ID of the snapshot replica
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Error message. It’s null if the request succeeds.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Error code. It’s `Success` if the request succeeds.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Destination region of the replication task
                     */
                    std::string m_destinationRegion;
                    bool m_destinationRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTCOPYRESULT_H_
