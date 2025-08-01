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
                     * 获取The details of associated CLB resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CLB The details of associated CLB resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated CDN resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CDN The details of associated CDN resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated WAF resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WAF The details of associated WAF resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated Anti-DDS resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDOS The details of associated Anti-DDS resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated LIVE resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LIVE The details of associated LIVE resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated VOD resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VOD The details of associated VOD resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated TKE resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TKE The details of associated TKE resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated APIGATEWAY resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIGATEWAY The details of associated APIGATEWAY resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated TCB resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TCB The details of associated TCB resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The details of associated TEO resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TEO The details of associated TEO resources.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The status of the async task. Valid values: `0` for querying, `1` for successful, and `2` for abnormal. If the status is `1`, check the result of `BindResourceResult` ; if the status is `2`, check the `error` .
                     * @return Status The status of the async task. Valid values: `0` for querying, `1` for successful, and `2` for abnormal. If the status is `1`, check the result of `BindResourceResult` ; if the status is `2`, check the `error` .
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
                     * 获取The cache time of the current result.
                     * @return CacheTime The cache time of the current result.
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
                     * 获取Associated TSE resource details
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TSE Associated TSE resource details
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Information of associated cos resource.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return COS Information of associated cos resource.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<COSInstanceList> GetCOS() const;

                    /**
                     * 判断参数 COS 是否已赋值
                     * @return COS 是否已赋值
                     * 
                     */
                    bool COSHasBeenSet() const;

                private:

                    /**
                     * The details of associated CLB resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClbInstanceList> m_cLB;
                    bool m_cLBHasBeenSet;

                    /**
                     * The details of associated CDN resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CdnInstanceList> m_cDN;
                    bool m_cDNHasBeenSet;

                    /**
                     * The details of associated WAF resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WafInstanceList> m_wAF;
                    bool m_wAFHasBeenSet;

                    /**
                     * The details of associated Anti-DDS resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DdosInstanceList> m_dDOS;
                    bool m_dDOSHasBeenSet;

                    /**
                     * The details of associated LIVE resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LiveInstanceList> m_lIVE;
                    bool m_lIVEHasBeenSet;

                    /**
                     * The details of associated VOD resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VODInstanceList> m_vOD;
                    bool m_vODHasBeenSet;

                    /**
                     * The details of associated TKE resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TkeInstanceList> m_tKE;
                    bool m_tKEHasBeenSet;

                    /**
                     * The details of associated APIGATEWAY resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApiGatewayInstanceList> m_aPIGATEWAY;
                    bool m_aPIGATEWAYHasBeenSet;

                    /**
                     * The details of associated TCB resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TCBInstanceList> m_tCB;
                    bool m_tCBHasBeenSet;

                    /**
                     * The details of associated TEO resources.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TeoInstanceList> m_tEO;
                    bool m_tEOHasBeenSet;

                    /**
                     * The status of the async task. Valid values: `0` for querying, `1` for successful, and `2` for abnormal. If the status is `1`, check the result of `BindResourceResult` ; if the status is `2`, check the `error` .
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The cache time of the current result.
                     */
                    std::string m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * Associated TSE resource details
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<TSEInstanceList> m_tSE;
                    bool m_tSEHasBeenSet;

                    /**
                     * Information of associated cos resource.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<COSInstanceList> m_cOS;
                    bool m_cOSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILRESPONSE_H_
