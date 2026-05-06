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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVICESOURCEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVICESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/SourceInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyNativeGatewayServiceSource request structure.
                */
                class ModifyNativeGatewayServiceSourceRequest : public AbstractModel
                {
                public:
                    ModifyNativeGatewayServiceSourceRequest();
                    ~ModifyNativeGatewayServiceSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway instance ID
                     * @return GatewayID Gateway instance ID
                     * 
                     */
                    std::string GetGatewayID() const;

                    /**
                     * 设置Gateway instance ID
                     * @param _gatewayID Gateway instance ID
                     * 
                     */
                    void SetGatewayID(const std::string& _gatewayID);

                    /**
                     * 判断参数 GatewayID 是否已赋值
                     * @return GatewayID 是否已赋值
                     * 
                     */
                    bool GatewayIDHasBeenSet() const;

                    /**
                     * 获取Service Source Instance ID
                     * @return SourceID Service Source Instance ID
                     * 
                     */
                    std::string GetSourceID() const;

                    /**
                     * 设置Service Source Instance ID
                     * @param _sourceID Service Source Instance ID
                     * 
                     */
                    void SetSourceID(const std::string& _sourceID);

                    /**
                     * 判断参数 SourceID 是否已赋值
                     * @return SourceID 是否已赋值
                     * 
                     */
                    bool SourceIDHasBeenSet() const;

                    /**
                     * 获取Service Source Name
                     * @return SourceName Service Source Name
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置Service Source Name
                     * @param _sourceName Service Source Name
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Service source instance additional information
                     * @return SourceInfo Service source instance additional information
                     * 
                     */
                    SourceInfo GetSourceInfo() const;

                    /**
                     * 设置Service source instance additional information
                     * @param _sourceInfo Service source instance additional information
                     * 
                     */
                    void SetSourceInfo(const SourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID
                     */
                    std::string m_gatewayID;
                    bool m_gatewayIDHasBeenSet;

                    /**
                     * Service Source Instance ID
                     */
                    std::string m_sourceID;
                    bool m_sourceIDHasBeenSet;

                    /**
                     * Service Source Name
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Service source instance additional information
                     */
                    SourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVICESOURCEREQUEST_H_
