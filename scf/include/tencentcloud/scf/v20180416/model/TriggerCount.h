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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERCOUNT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * `TriggerCount` describes the numbers of triggers in different types
                */
                class TriggerCount : public AbstractModel
                {
                public:
                    TriggerCount();
                    ~TriggerCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of COS triggers
                     * @return Cos Number of COS triggers
                     */
                    int64_t GetCos() const;

                    /**
                     * 设置Number of COS triggers
                     * @param Cos Number of COS triggers
                     */
                    void SetCos(const int64_t& _cos);

                    /**
                     * 判断参数 Cos 是否已赋值
                     * @return Cos 是否已赋值
                     */
                    bool CosHasBeenSet() const;

                    /**
                     * 获取Number of timer triggers
                     * @return Timer Number of timer triggers
                     */
                    int64_t GetTimer() const;

                    /**
                     * 设置Number of timer triggers
                     * @param Timer Number of timer triggers
                     */
                    void SetTimer(const int64_t& _timer);

                    /**
                     * 判断参数 Timer 是否已赋值
                     * @return Timer 是否已赋值
                     */
                    bool TimerHasBeenSet() const;

                    /**
                     * 获取Number of CMQ triggers
                     * @return Cmq Number of CMQ triggers
                     */
                    int64_t GetCmq() const;

                    /**
                     * 设置Number of CMQ triggers
                     * @param Cmq Number of CMQ triggers
                     */
                    void SetCmq(const int64_t& _cmq);

                    /**
                     * 判断参数 Cmq 是否已赋值
                     * @return Cmq 是否已赋值
                     */
                    bool CmqHasBeenSet() const;

                    /**
                     * 获取Total number of triggers
                     * @return Total Total number of triggers
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number of triggers
                     * @param Total Total number of triggers
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of CKafka triggers
                     * @return Ckafka Number of CKafka triggers
                     */
                    int64_t GetCkafka() const;

                    /**
                     * 设置Number of CKafka triggers
                     * @param Ckafka Number of CKafka triggers
                     */
                    void SetCkafka(const int64_t& _ckafka);

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     */
                    bool CkafkaHasBeenSet() const;

                    /**
                     * 获取Number of API Gateway triggers
                     * @return Apigw Number of API Gateway triggers
                     */
                    int64_t GetApigw() const;

                    /**
                     * 设置Number of API Gateway triggers
                     * @param Apigw Number of API Gateway triggers
                     */
                    void SetApigw(const int64_t& _apigw);

                    /**
                     * 判断参数 Apigw 是否已赋值
                     * @return Apigw 是否已赋值
                     */
                    bool ApigwHasBeenSet() const;

                    /**
                     * 获取Number of CLS triggers
                     * @return Cls Number of CLS triggers
                     */
                    int64_t GetCls() const;

                    /**
                     * 设置Number of CLS triggers
                     * @param Cls Number of CLS triggers
                     */
                    void SetCls(const int64_t& _cls);

                    /**
                     * 判断参数 Cls 是否已赋值
                     * @return Cls 是否已赋值
                     */
                    bool ClsHasBeenSet() const;

                    /**
                     * 获取Number of CLB triggers
                     * @return Clb Number of CLB triggers
                     */
                    int64_t GetClb() const;

                    /**
                     * 设置Number of CLB triggers
                     * @param Clb Number of CLB triggers
                     */
                    void SetClb(const int64_t& _clb);

                    /**
                     * 判断参数 Clb 是否已赋值
                     * @return Clb 是否已赋值
                     */
                    bool ClbHasBeenSet() const;

                    /**
                     * 获取Number of MPS triggers
                     * @return Mps Number of MPS triggers
                     */
                    int64_t GetMps() const;

                    /**
                     * 设置Number of MPS triggers
                     * @param Mps Number of MPS triggers
                     */
                    void SetMps(const int64_t& _mps);

                    /**
                     * 判断参数 Mps 是否已赋值
                     * @return Mps 是否已赋值
                     */
                    bool MpsHasBeenSet() const;

                    /**
                     * 获取Number of CM triggers
                     * @return Cm Number of CM triggers
                     */
                    int64_t GetCm() const;

                    /**
                     * 设置Number of CM triggers
                     * @param Cm Number of CM triggers
                     */
                    void SetCm(const int64_t& _cm);

                    /**
                     * 判断参数 Cm 是否已赋值
                     * @return Cm 是否已赋值
                     */
                    bool CmHasBeenSet() const;

                    /**
                     * 获取Number of VOD triggers
                     * @return Vod Number of VOD triggers
                     */
                    int64_t GetVod() const;

                    /**
                     * 设置Number of VOD triggers
                     * @param Vod Number of VOD triggers
                     */
                    void SetVod(const int64_t& _vod);

                    /**
                     * 判断参数 Vod 是否已赋值
                     * @return Vod 是否已赋值
                     */
                    bool VodHasBeenSet() const;

                private:

                    /**
                     * Number of COS triggers
                     */
                    int64_t m_cos;
                    bool m_cosHasBeenSet;

                    /**
                     * Number of timer triggers
                     */
                    int64_t m_timer;
                    bool m_timerHasBeenSet;

                    /**
                     * Number of CMQ triggers
                     */
                    int64_t m_cmq;
                    bool m_cmqHasBeenSet;

                    /**
                     * Total number of triggers
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of CKafka triggers
                     */
                    int64_t m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * Number of API Gateway triggers
                     */
                    int64_t m_apigw;
                    bool m_apigwHasBeenSet;

                    /**
                     * Number of CLS triggers
                     */
                    int64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * Number of CLB triggers
                     */
                    int64_t m_clb;
                    bool m_clbHasBeenSet;

                    /**
                     * Number of MPS triggers
                     */
                    int64_t m_mps;
                    bool m_mpsHasBeenSet;

                    /**
                     * Number of CM triggers
                     */
                    int64_t m_cm;
                    bool m_cmHasBeenSet;

                    /**
                     * Number of VOD triggers
                     */
                    int64_t m_vod;
                    bool m_vodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERCOUNT_H_
