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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STOPLIVEPADSTREAMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STOPLIVEPADSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * StopLivePadStream request structure.
                */
                class StopLivePadStreamRequest : public AbstractModel
                {
                public:
                    StopLivePadStreamRequest();
                    ~StopLivePadStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Ensure the streaming path uses the same AppName as the push/play URLs (default: 'live')
                     * @return AppName Ensure the streaming path uses the same AppName as the push/play URLs (default: 'live')
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Ensure the streaming path uses the same AppName as the push/play URLs (default: 'live')
                     * @param _appName Ensure the streaming path uses the same AppName as the push/play URLs (default: 'live')
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Your RTMP push domain.
                     * @return PushDomainName Your RTMP push domain.
                     * 
                     */
                    std::string GetPushDomainName() const;

                    /**
                     * 设置Your RTMP push domain.
                     * @param _pushDomainName Your RTMP push domain.
                     * 
                     */
                    void SetPushDomainName(const std::string& _pushDomainName);

                    /**
                     * 判断参数 PushDomainName 是否已赋值
                     * @return PushDomainName 是否已赋值
                     * 
                     */
                    bool PushDomainNameHasBeenSet() const;

                    /**
                     * 获取Your stream name.
                     * @return StreamName Your stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Your stream name.
                     * @param _streamName Your stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Operator notes.
                     * @return Operator Operator notes.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator notes.
                     * @param _operator Operator notes.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * Ensure the streaming path uses the same AppName as the push/play URLs (default: 'live')
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Your RTMP push domain.
                     */
                    std::string m_pushDomainName;
                    bool m_pushDomainNameHasBeenSet;

                    /**
                     * Your stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Operator notes.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STOPLIVEPADSTREAMREQUEST_H_
