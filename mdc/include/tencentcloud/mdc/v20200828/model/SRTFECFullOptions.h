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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_SRTFECFULLOPTIONS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_SRTFECFULLOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * SRT FEC advanced configuration
                */
                class SRTFECFullOptions : public AbstractModel
                {
                public:
                    SRTFECFullOptions();
                    ~SRTFECFullOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable FEC.
                     * @return Enable Whether to enable FEC.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable FEC.
                     * @param _enable Whether to enable FEC.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Number of FEC data packet Layout columns. Value range: >0
                     * @return Cols Number of FEC data packet Layout columns. Value range: >0
                     * 
                     */
                    int64_t GetCols() const;

                    /**
                     * 设置Number of FEC data packet Layout columns. Value range: >0
                     * @param _cols Number of FEC data packet Layout columns. Value range: >0
                     * 
                     */
                    void SetCols(const int64_t& _cols);

                    /**
                     * 判断参数 Cols 是否已赋值
                     * @return Cols 是否已赋值
                     * 
                     */
                    bool ColsHasBeenSet() const;

                    /**
                     * 获取Number of FEC data packet Layout rows. Value ranges from >=2 or <=-2.
                     * @return Rows Number of FEC data packet Layout rows. Value ranges from >=2 or <=-2.
                     * 
                     */
                    int64_t GetRows() const;

                    /**
                     * 设置Number of FEC data packet Layout rows. Value ranges from >=2 or <=-2.
                     * @param _rows Number of FEC data packet Layout rows. Value ranges from >=2 or <=-2.
                     * 
                     */
                    void SetRows(const int64_t& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取ARQ policy when FEC is enabled. Value: "always", "onreq", "never".
                     * @return ARQ ARQ policy when FEC is enabled. Value: "always", "onreq", "never".
                     * 
                     */
                    std::string GetARQ() const;

                    /**
                     * 设置ARQ policy when FEC is enabled. Value: "always", "onreq", "never".
                     * @param _aRQ ARQ policy when FEC is enabled. Value: "always", "onreq", "never".
                     * 
                     */
                    void SetARQ(const std::string& _aRQ);

                    /**
                     * 判断参数 ARQ 是否已赋值
                     * @return ARQ 是否已赋值
                     * 
                     */
                    bool ARQHasBeenSet() const;

                    /**
                     * 获取FEC data packet Layout organization. Value: "even", "staircase"
                     * @return Layout FEC data packet Layout organization. Value: "even", "staircase"
                     * 
                     */
                    std::string GetLayout() const;

                    /**
                     * 设置FEC data packet Layout organization. Value: "even", "staircase"
                     * @param _layout FEC data packet Layout organization. Value: "even", "staircase"
                     * 
                     */
                    void SetLayout(const std::string& _layout);

                    /**
                     * 判断参数 Layout 是否已赋值
                     * @return Layout 是否已赋值
                     * 
                     */
                    bool LayoutHasBeenSet() const;

                private:

                    /**
                     * Whether to enable FEC.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Number of FEC data packet Layout columns. Value range: >0
                     */
                    int64_t m_cols;
                    bool m_colsHasBeenSet;

                    /**
                     * Number of FEC data packet Layout rows. Value ranges from >=2 or <=-2.
                     */
                    int64_t m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * ARQ policy when FEC is enabled. Value: "always", "onreq", "never".
                     */
                    std::string m_aRQ;
                    bool m_aRQHasBeenSet;

                    /**
                     * FEC data packet Layout organization. Value: "even", "staircase"
                     */
                    std::string m_layout;
                    bool m_layoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_SRTFECFULLOPTIONS_H_
