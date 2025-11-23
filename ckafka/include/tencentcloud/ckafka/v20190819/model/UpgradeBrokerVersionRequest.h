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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_UPGRADEBROKERVERSIONREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_UPGRADEBROKERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * UpgradeBrokerVersion request structure.
                */
                class UpgradeBrokerVersionRequest : public AbstractModel
                {
                public:
                    UpgradeBrokerVersionRequest();
                    ~UpgradeBrokerVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ckafka cluster instance Id.
                     * @return InstanceId The ckafka cluster instance Id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id.
                     * @param _instanceId The ckafka cluster instance Id.
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
                     * 获取1. smooth configuration upgrade 2. vertical configuration upgrade.
                     * @return Type 1. smooth configuration upgrade 2. vertical configuration upgrade.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1. smooth configuration upgrade 2. vertical configuration upgrade.
                     * @param _type 1. smooth configuration upgrade 2. vertical configuration upgrade.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Version number
                     * @return SourceVersion Version number
                     * 
                     */
                    std::string GetSourceVersion() const;

                    /**
                     * 设置Version number
                     * @param _sourceVersion Version number
                     * 
                     */
                    void SetSourceVersion(const std::string& _sourceVersion);

                    /**
                     * 判断参数 SourceVersion 是否已赋值
                     * @return SourceVersion 是否已赋值
                     * 
                     */
                    bool SourceVersionHasBeenSet() const;

                    /**
                     * 获取Version number
                     * @return TargetVersion Version number
                     * 
                     */
                    std::string GetTargetVersion() const;

                    /**
                     * 设置Version number
                     * @param _targetVersion Version number
                     * 
                     */
                    void SetTargetVersion(const std::string& _targetVersion);

                    /**
                     * 判断参数 TargetVersion 是否已赋值
                     * @return TargetVersion 是否已赋值
                     * 
                     */
                    bool TargetVersionHasBeenSet() const;

                    /**
                     * 获取Delay time.
                     * @return DelayTimeStamp Delay time.
                     * 
                     */
                    std::string GetDelayTimeStamp() const;

                    /**
                     * 设置Delay time.
                     * @param _delayTimeStamp Delay time.
                     * 
                     */
                    void SetDelayTimeStamp(const std::string& _delayTimeStamp);

                    /**
                     * 判断参数 DelayTimeStamp 是否已赋值
                     * @return DelayTimeStamp 是否已赋值
                     * 
                     */
                    bool DelayTimeStampHasBeenSet() const;

                private:

                    /**
                     * The ckafka cluster instance Id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 1. smooth configuration upgrade 2. vertical configuration upgrade.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Version number
                     */
                    std::string m_sourceVersion;
                    bool m_sourceVersionHasBeenSet;

                    /**
                     * Version number
                     */
                    std::string m_targetVersion;
                    bool m_targetVersionHasBeenSet;

                    /**
                     * Delay time.
                     */
                    std::string m_delayTimeStamp;
                    bool m_delayTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_UPGRADEBROKERVERSIONREQUEST_H_
