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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/IPLocation.h>
#include <tencentcloud/rce/v20260130/model/IPNetwork.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The basic information of the IP environment
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The geographical location of the IP address</p>
                     * @return Location <p>The geographical location of the IP address</p>
                     * 
                     */
                    IPLocation GetLocation() const;

                    /**
                     * 设置<p>The geographical location of the IP address</p>
                     * @param _location <p>The geographical location of the IP address</p>
                     * 
                     */
                    void SetLocation(const IPLocation& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取<p>The basic IP network information</p>
                     * @return Network <p>The basic IP network information</p>
                     * 
                     */
                    IPNetwork GetNetwork() const;

                    /**
                     * 设置<p>The basic IP network information</p>
                     * @param _network <p>The basic IP network information</p>
                     * 
                     */
                    void SetNetwork(const IPNetwork& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                private:

                    /**
                     * <p>The geographical location of the IP address</p>
                     */
                    IPLocation m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>The basic IP network information</p>
                     */
                    IPNetwork m_network;
                    bool m_networkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ENVIRONMENT_H_
