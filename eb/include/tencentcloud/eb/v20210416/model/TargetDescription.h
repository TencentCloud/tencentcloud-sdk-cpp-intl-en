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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TARGETDESCRIPTION_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TARGETDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/SCFParams.h>
#include <tencentcloud/eb/v20210416/model/CkafkaTargetParams.h>
#include <tencentcloud/eb/v20210416/model/ESTargetParams.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Target description
                */
                class TargetDescription : public AbstractModel
                {
                public:
                    TargetDescription();
                    ~TargetDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * @return ResourceDescription Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     */
                    std::string GetResourceDescription() const;

                    /**
                     * 设置Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * @param ResourceDescription Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     */
                    void SetResourceDescription(const std::string& _resourceDescription);

                    /**
                     * 判断参数 ResourceDescription 是否已赋值
                     * @return ResourceDescription 是否已赋值
                     */
                    bool ResourceDescriptionHasBeenSet() const;

                    /**
                     * 获取SCF parameter
                     * @return SCFParams SCF parameter
                     */
                    SCFParams GetSCFParams() const;

                    /**
                     * 设置SCF parameter
                     * @param SCFParams SCF parameter
                     */
                    void SetSCFParams(const SCFParams& _sCFParams);

                    /**
                     * 判断参数 SCFParams 是否已赋值
                     * @return SCFParams 是否已赋值
                     */
                    bool SCFParamsHasBeenSet() const;

                    /**
                     * 获取CKafka parameters
                     * @return CkafkaTargetParams CKafka parameters
                     */
                    CkafkaTargetParams GetCkafkaTargetParams() const;

                    /**
                     * 设置CKafka parameters
                     * @param CkafkaTargetParams CKafka parameters
                     */
                    void SetCkafkaTargetParams(const CkafkaTargetParams& _ckafkaTargetParams);

                    /**
                     * 判断参数 CkafkaTargetParams 是否已赋值
                     * @return CkafkaTargetParams 是否已赋值
                     */
                    bool CkafkaTargetParamsHasBeenSet() const;

                    /**
                     * 获取ElasticSearch parameters
                     * @return ESTargetParams ElasticSearch parameters
                     */
                    ESTargetParams GetESTargetParams() const;

                    /**
                     * 设置ElasticSearch parameters
                     * @param ESTargetParams ElasticSearch parameters
                     */
                    void SetESTargetParams(const ESTargetParams& _eSTargetParams);

                    /**
                     * 判断参数 ESTargetParams 是否已赋值
                     * @return ESTargetParams 是否已赋值
                     */
                    bool ESTargetParamsHasBeenSet() const;

                private:

                    /**
                     * Six-Segment QCS resource description. For more information, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     */
                    std::string m_resourceDescription;
                    bool m_resourceDescriptionHasBeenSet;

                    /**
                     * SCF parameter
                     */
                    SCFParams m_sCFParams;
                    bool m_sCFParamsHasBeenSet;

                    /**
                     * CKafka parameters
                     */
                    CkafkaTargetParams m_ckafkaTargetParams;
                    bool m_ckafkaTargetParamsHasBeenSet;

                    /**
                     * ElasticSearch parameters
                     */
                    ESTargetParams m_eSTargetParams;
                    bool m_eSTargetParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TARGETDESCRIPTION_H_
