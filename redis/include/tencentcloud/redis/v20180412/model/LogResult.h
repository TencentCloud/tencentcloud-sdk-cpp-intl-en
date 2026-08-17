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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_LOGRESULT_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_LOGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * log result
                */
                class LogResult : public AbstractModel
                {
                public:
                    LogResult();
                    ~LogResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Database ID</p>
                     * @return DBId <p>Database ID</p>
                     * 
                     */
                    int64_t GetDBId() const;

                    /**
                     * 设置<p>Database ID</p>
                     * @param _dBId <p>Database ID</p>
                     * 
                     */
                    void SetDBId(const int64_t& _dBId);

                    /**
                     * 判断参数 DBId 是否已赋值
                     * @return DBId 是否已赋值
                     * 
                     */
                    bool DBIdHasBeenSet() const;

                    /**
                     * 获取<p>Command delay (ms)</p>
                     * @return CommandLatency <p>Command delay (ms)</p>
                     * 
                     */
                    int64_t GetCommandLatency() const;

                    /**
                     * 设置<p>Command delay (ms)</p>
                     * @param _commandLatency <p>Command delay (ms)</p>
                     * 
                     */
                    void SetCommandLatency(const int64_t& _commandLatency);

                    /**
                     * 判断参数 CommandLatency 是否已赋值
                     * @return CommandLatency 是否已赋值
                     * 
                     */
                    bool CommandLatencyHasBeenSet() const;

                    /**
                     * 获取<p>Creation time (Format: 2006-01-02 15:04:05.000)</p>
                     * @return Timestamp <p>Creation time (Format: 2006-01-02 15:04:05.000)</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>Creation time (Format: 2006-01-02 15:04:05.000)</p>
                     * @param _timestamp <p>Creation time (Format: 2006-01-02 15:04:05.000)</p>
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>client address</p>
                     * @return ClientAddr <p>client address</p>
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置<p>client address</p>
                     * @param _clientAddr <p>client address</p>
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取<p>Username.</p>
                     * @return UserName <p>Username.</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Username.</p>
                     * @param _userName <p>Username.</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>Command type</p>
                     * @return CommandType <p>Command type</p>
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置<p>Command type</p>
                     * @param _commandType <p>Command type</p>
                     * 
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     * 
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cache code, backend redis node</p>
                     * @return CacheCode <p>Cache code, backend redis node</p>
                     * 
                     */
                    std::string GetCacheCode() const;

                    /**
                     * 设置<p>Cache code, backend redis node</p>
                     * @param _cacheCode <p>Cache code, backend redis node</p>
                     * 
                     */
                    void SetCacheCode(const std::string& _cacheCode);

                    /**
                     * 判断参数 CacheCode 是否已赋值
                     * @return CacheCode 是否已赋值
                     * 
                     */
                    bool CacheCodeHasBeenSet() const;

                    /**
                     * 获取<p>Command details</p>
                     * @return CommandDetail <p>Command details</p>
                     * 
                     */
                    std::string GetCommandDetail() const;

                    /**
                     * 设置<p>Command details</p>
                     * @param _commandDetail <p>Command details</p>
                     * 
                     */
                    void SetCommandDetail(const std::string& _commandDetail);

                    /**
                     * 判断参数 CommandDetail 是否已赋值
                     * @return CommandDetail 是否已赋值
                     * 
                     */
                    bool CommandDetailHasBeenSet() const;

                    /**
                     * 获取<p>Error information</p>
                     * @return ErrMsg <p>Error information</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>Error information</p>
                     * @param _errMsg <p>Error information</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>Database ID</p>
                     */
                    int64_t m_dBId;
                    bool m_dBIdHasBeenSet;

                    /**
                     * <p>Command delay (ms)</p>
                     */
                    int64_t m_commandLatency;
                    bool m_commandLatencyHasBeenSet;

                    /**
                     * <p>Creation time (Format: 2006-01-02 15:04:05.000)</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>client address</p>
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Command type</p>
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * <p>Cache code, backend redis node</p>
                     */
                    std::string m_cacheCode;
                    bool m_cacheCodeHasBeenSet;

                    /**
                     * <p>Command details</p>
                     */
                    std::string m_commandDetail;
                    bool m_commandDetailHasBeenSet;

                    /**
                     * <p>Error information</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_LOGRESULT_H_
