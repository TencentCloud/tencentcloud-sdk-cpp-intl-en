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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_USAGEDATAITEM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_USAGEDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Tencent Interactive Whiteboard usage information.
                */
                class UsageDataItem : public AbstractModel
                {
                public:
                    UsageDataItem();
                    ~UsageDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start date in the format of YYYY-MM-DD.
                     * @return Time Start date in the format of YYYY-MM-DD.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Start date in the format of YYYY-MM-DD.
                     * @param _time Start date in the format of YYYY-MM-DD.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Subproduct usage information, which is consistent with the corresponding request parameters.
- sp_tiw_board: The duration of use of whiteboards.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording.
                     * @return SubProduct Subproduct usage information, which is consistent with the corresponding request parameters.
- sp_tiw_board: The duration of use of whiteboards.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording.
                     * 
                     */
                    std::string GetSubProduct() const;

                    /**
                     * 设置Subproduct usage information, which is consistent with the corresponding request parameters.
- sp_tiw_board: The duration of use of whiteboards.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording.
                     * @param _subProduct Subproduct usage information, which is consistent with the corresponding request parameters.
- sp_tiw_board: The duration of use of whiteboards.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording.
                     * 
                     */
                    void SetSubProduct(const std::string& _subProduct);

                    /**
                     * 判断参数 SubProduct 是否已赋值
                     * @return SubProduct 是否已赋值
                     * 
                     */
                    bool SubProductHasBeenSet() const;

                    /**
                     * 获取Usage values.
- The unit of sp_tiw_dt and sp_tiw_st is pages.
- The unit of sp_tiw_board and sp_tiw_ric is minutes.
                     * @return Value Usage values.
- The unit of sp_tiw_dt and sp_tiw_st is pages.
- The unit of sp_tiw_board and sp_tiw_ric is minutes.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Usage values.
- The unit of sp_tiw_dt and sp_tiw_st is pages.
- The unit of sp_tiw_board and sp_tiw_ric is minutes.
                     * @param _value Usage values.
- The unit of sp_tiw_dt and sp_tiw_st is pages.
- The unit of sp_tiw_board and sp_tiw_ric is minutes.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Start date in the format of YYYY-MM-DD.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Subproduct usage information, which is consistent with the corresponding request parameters.
- sp_tiw_board: The duration of use of whiteboards.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording.
                     */
                    std::string m_subProduct;
                    bool m_subProductHasBeenSet;

                    /**
                     * Usage values.
- The unit of sp_tiw_dt and sp_tiw_st is pages.
- The unit of sp_tiw_board and sp_tiw_ric is minutes.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_USAGEDATAITEM_H_
