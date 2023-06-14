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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CONNECTIONDESCRIPTION_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CONNECTIONDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/APIGWParams.h>
#include <tencentcloud/eb/v20210416/model/CkafkaParams.h>
#include <tencentcloud/eb/v20210416/model/DTSParams.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Connection description
                */
                class ConnectionDescription : public AbstractModel
                {
                public:
                    ConnectionDescription();
                    ~ConnectionDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * @return ResourceDescription Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * 
                     */
                    std::string GetResourceDescription() const;

                    /**
                     * 设置Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * @param _resourceDescription Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * 
                     */
                    void SetResourceDescription(const std::string& _resourceDescription);

                    /**
                     * 判断参数 ResourceDescription 是否已赋值
                     * @return ResourceDescription 是否已赋值
                     * 
                     */
                    bool ResourceDescriptionHasBeenSet() const;

                    /**
                     * 获取API Gateway parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return APIGWParams API Gateway parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    APIGWParams GetAPIGWParams() const;

                    /**
                     * 设置API Gateway parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _aPIGWParams API Gateway parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIGWParams(const APIGWParams& _aPIGWParams);

                    /**
                     * 判断参数 APIGWParams 是否已赋值
                     * @return APIGWParams 是否已赋值
                     * 
                     */
                    bool APIGWParamsHasBeenSet() const;

                    /**
                     * 获取CKafka parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CkafkaParams CKafka parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CkafkaParams GetCkafkaParams() const;

                    /**
                     * 设置CKafka parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ckafkaParams CKafka parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCkafkaParams(const CkafkaParams& _ckafkaParams);

                    /**
                     * 判断参数 CkafkaParams 是否已赋值
                     * @return CkafkaParams 是否已赋值
                     * 
                     */
                    bool CkafkaParamsHasBeenSet() const;

                    /**
                     * 获取Data Transfer Service (DTS) connector information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DTSParams Data Transfer Service (DTS) connector information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    DTSParams GetDTSParams() const;

                    /**
                     * 设置Data Transfer Service (DTS) connector information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _dTSParams Data Transfer Service (DTS) connector information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDTSParams(const DTSParams& _dTSParams);

                    /**
                     * 判断参数 DTSParams 是否已赋值
                     * @return DTSParams 是否已赋值
                     * 
                     */
                    bool DTSParamsHasBeenSet() const;

                private:

                    /**
                     * Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     */
                    std::string m_resourceDescription;
                    bool m_resourceDescriptionHasBeenSet;

                    /**
                     * API Gateway parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    APIGWParams m_aPIGWParams;
                    bool m_aPIGWParamsHasBeenSet;

                    /**
                     * CKafka parameters
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CkafkaParams m_ckafkaParams;
                    bool m_ckafkaParamsHasBeenSet;

                    /**
                     * Data Transfer Service (DTS) connector information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    DTSParams m_dTSParams;
                    bool m_dTSParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CONNECTIONDESCRIPTION_H_
