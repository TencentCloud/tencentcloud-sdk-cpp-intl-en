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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ClbInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/CdnInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/WafInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/DdosInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/LiveInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/VODInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TkeInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/ApiGatewayInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TCBInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TeoInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TSEInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/COSInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TDMQInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/MQTTInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/GAAPInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/SCFInstanceList.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateBindResourceTaskDetail response structure.
                */
                class DescribeCertificateBindResourceTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeCertificateBindResourceTaskDetailResponse();
                    ~DescribeCertificateBindResourceTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>clb resource detail</p>
                     * @return CLB <p>clb resource detail</p>
                     * 
                     */
                    std::vector<ClbInstanceList> GetCLB() const;

                    /**
                     * 判断参数 CLB 是否已赋值
                     * @return CLB 是否已赋值
                     * 
                     */
                    bool CLBHasBeenSet() const;

                    /**
                     * 获取<p>cdn resource detail</p>
                     * @return CDN <p>cdn resource detail</p>
                     * 
                     */
                    std::vector<CdnInstanceList> GetCDN() const;

                    /**
                     * 判断参数 CDN 是否已赋值
                     * @return CDN 是否已赋值
                     * 
                     */
                    bool CDNHasBeenSet() const;

                    /**
                     * 获取<p>waf resource detail</p>
                     * @return WAF <p>waf resource detail</p>
                     * 
                     */
                    std::vector<WafInstanceList> GetWAF() const;

                    /**
                     * 判断参数 WAF 是否已赋值
                     * @return WAF 是否已赋值
                     * 
                     */
                    bool WAFHasBeenSet() const;

                    /**
                     * 获取<p>Associate ddos resource detail</p>
                     * @return DDOS <p>Associate ddos resource detail</p>
                     * 
                     */
                    std::vector<DdosInstanceList> GetDDOS() const;

                    /**
                     * 判断参数 DDOS 是否已赋值
                     * @return DDOS 是否已赋值
                     * 
                     */
                    bool DDOSHasBeenSet() const;

                    /**
                     * 获取<p>Associate live resource detail</p>
                     * @return LIVE <p>Associate live resource detail</p>
                     * 
                     */
                    std::vector<LiveInstanceList> GetLIVE() const;

                    /**
                     * 判断参数 LIVE 是否已赋值
                     * @return LIVE 是否已赋值
                     * 
                     */
                    bool LIVEHasBeenSet() const;

                    /**
                     * 获取<p>vod resource detail</p>
                     * @return VOD <p>vod resource detail</p>
                     * 
                     */
                    std::vector<VODInstanceList> GetVOD() const;

                    /**
                     * 判断参数 VOD 是否已赋值
                     * @return VOD 是否已赋值
                     * 
                     */
                    bool VODHasBeenSet() const;

                    /**
                     * 获取<p>tke resource detail</p>
                     * @return TKE <p>tke resource detail</p>
                     * 
                     */
                    std::vector<TkeInstanceList> GetTKE() const;

                    /**
                     * 判断参数 TKE 是否已赋值
                     * @return TKE 是否已赋值
                     * 
                     */
                    bool TKEHasBeenSet() const;

                    /**
                     * 获取<p>apigateway resource detail</p>
                     * @return APIGATEWAY <p>apigateway resource detail</p>
                     * 
                     */
                    std::vector<ApiGatewayInstanceList> GetAPIGATEWAY() const;

                    /**
                     * 判断参数 APIGATEWAY 是否已赋值
                     * @return APIGATEWAY 是否已赋值
                     * 
                     */
                    bool APIGATEWAYHasBeenSet() const;

                    /**
                     * 获取<p>tcb resource detail</p>
                     * @return TCB <p>tcb resource detail</p>
                     * 
                     */
                    std::vector<TCBInstanceList> GetTCB() const;

                    /**
                     * 判断参数 TCB 是否已赋值
                     * @return TCB 是否已赋值
                     * 
                     */
                    bool TCBHasBeenSet() const;

                    /**
                     * 获取<p>Associate teo resource detail</p>
                     * @return TEO <p>Associate teo resource detail</p>
                     * 
                     */
                    std::vector<TeoInstanceList> GetTEO() const;

                    /**
                     * 判断参数 TEO 是否已赋值
                     * @return TEO 是否已赋值
                     * 
                     */
                    bool TEOHasBeenSet() const;

                    /**
                     * 获取<p>Associate cloud resources async query result: 0 indicates querying, 1 indicates success. 2 indicates an exception. If the status is 1, view the BindResourceResult. If the status is 2, view the Error reason.</p>
                     * @return Status <p>Associate cloud resources async query result: 0 indicates querying, 1 indicates success. 2 indicates an exception. If the status is 1, view the BindResourceResult. If the status is 2, view the Error reason.</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Current result cache time</p>
                     * @return CacheTime <p>Current result cache time</p>
                     * 
                     */
                    std::string GetCacheTime() const;

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                    /**
                     * 获取<p>Associate tse resource detail</p>
                     * @return TSE <p>Associate tse resource detail</p>
                     * 
                     */
                    std::vector<TSEInstanceList> GetTSE() const;

                    /**
                     * 判断参数 TSE 是否已赋值
                     * @return TSE 是否已赋值
                     * 
                     */
                    bool TSEHasBeenSet() const;

                    /**
                     * 获取<p>Associated COS resource detail</p>
                     * @return COS <p>Associated COS resource detail</p>
                     * 
                     */
                    std::vector<COSInstanceList> GetCOS() const;

                    /**
                     * 判断参数 COS 是否已赋值
                     * @return COS 是否已赋值
                     * 
                     */
                    bool COSHasBeenSet() const;

                    /**
                     * 获取<p>Associated TDMQ - Rabbit resource detail</p>
                     * @return TDMQ <p>Associated TDMQ - Rabbit resource detail</p>
                     * 
                     */
                    std::vector<TDMQInstanceList> GetTDMQ() const;

                    /**
                     * 判断参数 TDMQ 是否已赋值
                     * @return TDMQ 是否已赋值
                     * 
                     */
                    bool TDMQHasBeenSet() const;

                    /**
                     * 获取<p>Associated MQTT resource detail</p>
                     * @return MQTT <p>Associated MQTT resource detail</p>
                     * 
                     */
                    std::vector<MQTTInstanceList> GetMQTT() const;

                    /**
                     * 判断参数 MQTT 是否已赋值
                     * @return MQTT 是否已赋值
                     * 
                     */
                    bool MQTTHasBeenSet() const;

                    /**
                     * 获取<p>Associated GAAP resource detail</p>
                     * @return GAAP <p>Associated GAAP resource detail</p>
                     * 
                     */
                    std::vector<GAAPInstanceList> GetGAAP() const;

                    /**
                     * 判断参数 GAAP 是否已赋值
                     * @return GAAP 是否已赋值
                     * 
                     */
                    bool GAAPHasBeenSet() const;

                    /**
                     * 获取<p>Associated SCF resource detail</p>
                     * @return SCF <p>Associated SCF resource detail</p>
                     * 
                     */
                    std::vector<SCFInstanceList> GetSCF() const;

                    /**
                     * 判断参数 SCF 是否已赋值
                     * @return SCF 是否已赋值
                     * 
                     */
                    bool SCFHasBeenSet() const;

                private:

                    /**
                     * <p>clb resource detail</p>
                     */
                    std::vector<ClbInstanceList> m_cLB;
                    bool m_cLBHasBeenSet;

                    /**
                     * <p>cdn resource detail</p>
                     */
                    std::vector<CdnInstanceList> m_cDN;
                    bool m_cDNHasBeenSet;

                    /**
                     * <p>waf resource detail</p>
                     */
                    std::vector<WafInstanceList> m_wAF;
                    bool m_wAFHasBeenSet;

                    /**
                     * <p>Associate ddos resource detail</p>
                     */
                    std::vector<DdosInstanceList> m_dDOS;
                    bool m_dDOSHasBeenSet;

                    /**
                     * <p>Associate live resource detail</p>
                     */
                    std::vector<LiveInstanceList> m_lIVE;
                    bool m_lIVEHasBeenSet;

                    /**
                     * <p>vod resource detail</p>
                     */
                    std::vector<VODInstanceList> m_vOD;
                    bool m_vODHasBeenSet;

                    /**
                     * <p>tke resource detail</p>
                     */
                    std::vector<TkeInstanceList> m_tKE;
                    bool m_tKEHasBeenSet;

                    /**
                     * <p>apigateway resource detail</p>
                     */
                    std::vector<ApiGatewayInstanceList> m_aPIGATEWAY;
                    bool m_aPIGATEWAYHasBeenSet;

                    /**
                     * <p>tcb resource detail</p>
                     */
                    std::vector<TCBInstanceList> m_tCB;
                    bool m_tCBHasBeenSet;

                    /**
                     * <p>Associate teo resource detail</p>
                     */
                    std::vector<TeoInstanceList> m_tEO;
                    bool m_tEOHasBeenSet;

                    /**
                     * <p>Associate cloud resources async query result: 0 indicates querying, 1 indicates success. 2 indicates an exception. If the status is 1, view the BindResourceResult. If the status is 2, view the Error reason.</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Current result cache time</p>
                     */
                    std::string m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * <p>Associate tse resource detail</p>
                     */
                    std::vector<TSEInstanceList> m_tSE;
                    bool m_tSEHasBeenSet;

                    /**
                     * <p>Associated COS resource detail</p>
                     */
                    std::vector<COSInstanceList> m_cOS;
                    bool m_cOSHasBeenSet;

                    /**
                     * <p>Associated TDMQ - Rabbit resource detail</p>
                     */
                    std::vector<TDMQInstanceList> m_tDMQ;
                    bool m_tDMQHasBeenSet;

                    /**
                     * <p>Associated MQTT resource detail</p>
                     */
                    std::vector<MQTTInstanceList> m_mQTT;
                    bool m_mQTTHasBeenSet;

                    /**
                     * <p>Associated GAAP resource detail</p>
                     */
                    std::vector<GAAPInstanceList> m_gAAP;
                    bool m_gAAPHasBeenSet;

                    /**
                     * <p>Associated SCF resource detail</p>
                     */
                    std::vector<SCFInstanceList> m_sCF;
                    bool m_sCFHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILRESPONSE_H_
