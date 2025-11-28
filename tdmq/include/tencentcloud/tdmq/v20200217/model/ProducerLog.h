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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCERLOG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCERLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Message production information
                */
                class ProducerLog : public AbstractModel
                {
                public:
                    ProducerLog();
                    ~ProducerLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message ID.
                     * @return MsgId Message ID.
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID.
                     * @param _msgId Message ID.
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取Producer name.
                     * @return ProducerName Producer name.
                     * 
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置Producer name.
                     * @param _producerName Producer name.
                     * 
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     * 
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取Message production time.
                     * @return ProduceTime Message production time.
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置Message production time.
                     * @param _produceTime Message production time.
                     * 
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取Producer client.
                     * @return ProducerAddr Producer client.
                     * 
                     */
                    std::string GetProducerAddr() const;

                    /**
                     * 设置Producer client.
                     * @param _producerAddr Producer client.
                     * 
                     */
                    void SetProducerAddr(const std::string& _producerAddr);

                    /**
                     * 判断参数 ProducerAddr 是否已赋值
                     * @return ProducerAddr 是否已赋值
                     * 
                     */
                    bool ProducerAddrHasBeenSet() const;

                    /**
                     * 获取Production time cost (in seconds).
                     * @return ProduceUseTime Production time cost (in seconds).
                     * 
                     */
                    uint64_t GetProduceUseTime() const;

                    /**
                     * 设置Production time cost (in seconds).
                     * @param _produceUseTime Production time cost (in seconds).
                     * 
                     */
                    void SetProduceUseTime(const uint64_t& _produceUseTime);

                    /**
                     * 判断参数 ProduceUseTime 是否已赋值
                     * @return ProduceUseTime 是否已赋值
                     * 
                     */
                    bool ProduceUseTimeHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Message ID.
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Producer name.
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * Message production time.
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * Producer client.
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * Production time cost (in seconds).
                     */
                    uint64_t m_produceUseTime;
                    bool m_produceUseTimeHasBeenSet;

                    /**
                     * Status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCERLOG_H_
