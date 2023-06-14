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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEROLLBACKRANGETIME_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEROLLBACKRANGETIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RollbackTimeRange.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Time range available for instance rollback
                */
                class InstanceRollbackRangeTime : public AbstractModel
                {
                public:
                    InstanceRollbackRangeTime();
                    ~InstanceRollbackRangeTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queries database error code
                     * @return Code Queries database error code
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Queries database error code
                     * @param _code Queries database error code
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Queries database error message
                     * @return Message Queries database error message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Queries database error message
                     * @param _message Queries database error message
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
                     * 获取List of instance IDs. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId List of instance IDs. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置List of instance IDs. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     * @param _instanceId List of instance IDs. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
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
                     * 获取Time range available for rollback
                     * @return Times Time range available for rollback
                     * 
                     */
                    std::vector<RollbackTimeRange> GetTimes() const;

                    /**
                     * 设置Time range available for rollback
                     * @param _times Time range available for rollback
                     * 
                     */
                    void SetTimes(const std::vector<RollbackTimeRange>& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                private:

                    /**
                     * Queries database error code
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Queries database error message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * List of instance IDs. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Time range available for rollback
                     */
                    std::vector<RollbackTimeRange> m_times;
                    bool m_timesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEROLLBACKRANGETIME_H_
