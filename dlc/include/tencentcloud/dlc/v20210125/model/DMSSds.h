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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DMSSDS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DMSSDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>
#include <tencentcloud/dlc/v20210125/model/DMSColumnOrder.h>
#include <tencentcloud/dlc/v20210125/model/DMSColumn.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Description of metadata storage attributes
                */
                class DMSSds : public AbstractModel
                {
                public:
                    DMSSds();
                    ~DMSSds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Storage address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Storage address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Storage address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Input format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputFormat Input format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInputFormat() const;

                    /**
                     * 设置Input format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inputFormat Input format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInputFormat(const std::string& _inputFormat);

                    /**
                     * 判断参数 InputFormat 是否已赋值
                     * @return InputFormat 是否已赋值
                     * 
                     */
                    bool InputFormatHasBeenSet() const;

                    /**
                     * 获取Output format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputFormat Output format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置Output format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputFormat Output format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取Number of buckets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NumBuckets Number of buckets
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNumBuckets() const;

                    /**
                     * 设置Number of buckets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _numBuckets Number of buckets
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNumBuckets(const int64_t& _numBuckets);

                    /**
                     * 判断参数 NumBuckets 是否已赋值
                     * @return NumBuckets 是否已赋值
                     * 
                     */
                    bool NumBucketsHasBeenSet() const;

                    /**
                     * 获取Whether it is compressed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Compressed Whether it is compressed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCompressed() const;

                    /**
                     * 设置Whether it is compressed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compressed Whether it is compressed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompressed(const bool& _compressed);

                    /**
                     * 判断参数 Compressed 是否已赋值
                     * @return Compressed 是否已赋值
                     * 
                     */
                    bool CompressedHasBeenSet() const;

                    /**
                     * 获取Whether it has a subdirectory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoredAsSubDirectories Whether it has a subdirectory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetStoredAsSubDirectories() const;

                    /**
                     * 设置Whether it has a subdirectory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storedAsSubDirectories Whether it has a subdirectory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStoredAsSubDirectories(const bool& _storedAsSubDirectories);

                    /**
                     * 判断参数 StoredAsSubDirectories 是否已赋值
                     * @return StoredAsSubDirectories 是否已赋值
                     * 
                     */
                    bool StoredAsSubDirectoriesHasBeenSet() const;

                    /**
                     * 获取Serialization lib
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SerdeLib Serialization lib
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSerdeLib() const;

                    /**
                     * 设置Serialization lib
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serdeLib Serialization lib
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSerdeLib(const std::string& _serdeLib);

                    /**
                     * 判断参数 SerdeLib 是否已赋值
                     * @return SerdeLib 是否已赋值
                     * 
                     */
                    bool SerdeLibHasBeenSet() const;

                    /**
                     * 获取Serialization name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SerdeName Serialization name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSerdeName() const;

                    /**
                     * 设置Serialization name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serdeName Serialization name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSerdeName(const std::string& _serdeName);

                    /**
                     * 判断参数 SerdeName 是否已赋值
                     * @return SerdeName 是否已赋值
                     * 
                     */
                    bool SerdeNameHasBeenSet() const;

                    /**
                     * 获取Bucket name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BucketCols Bucket name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBucketCols() const;

                    /**
                     * 设置Bucket name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bucketCols Bucket name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBucketCols(const std::vector<std::string>& _bucketCols);

                    /**
                     * 判断参数 BucketCols 是否已赋值
                     * @return BucketCols 是否已赋值
                     * 
                     */
                    bool BucketColsHasBeenSet() const;

                    /**
                     * 获取Serialization parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SerdeParams Serialization parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KVPair> GetSerdeParams() const;

                    /**
                     * 设置Serialization parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serdeParams Serialization parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSerdeParams(const std::vector<KVPair>& _serdeParams);

                    /**
                     * 判断参数 SerdeParams 是否已赋值
                     * @return SerdeParams 是否已赋值
                     * 
                     */
                    bool SerdeParamsHasBeenSet() const;

                    /**
                     * 获取Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Params Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KVPair> GetParams() const;

                    /**
                     * 设置Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _params Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParams(const std::vector<KVPair>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Column sorting (Expired)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SortCols Column sorting (Expired)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DMSColumnOrder GetSortCols() const;

                    /**
                     * 设置Column sorting (Expired)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sortCols Column sorting (Expired)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSortCols(const DMSColumnOrder& _sortCols);

                    /**
                     * 判断参数 SortCols 是否已赋值
                     * @return SortCols 是否已赋值
                     * 
                     */
                    bool SortColsHasBeenSet() const;

                    /**
                     * 获取Column
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cols Column
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DMSColumn> GetCols() const;

                    /**
                     * 设置Column
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cols Column
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCols(const std::vector<DMSColumn>& _cols);

                    /**
                     * 判断参数 Cols 是否已赋值
                     * @return Cols 是否已赋值
                     * 
                     */
                    bool ColsHasBeenSet() const;

                    /**
                     * 获取Column sorting field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SortColumns Column sorting field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DMSColumnOrder> GetSortColumns() const;

                    /**
                     * 设置Column sorting field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sortColumns Column sorting field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSortColumns(const std::vector<DMSColumnOrder>& _sortColumns);

                    /**
                     * 判断参数 SortColumns 是否已赋值
                     * @return SortColumns 是否已赋值
                     * 
                     */
                    bool SortColumnsHasBeenSet() const;

                private:

                    /**
                     * Storage address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Input format
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_inputFormat;
                    bool m_inputFormatHasBeenSet;

                    /**
                     * Output format
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * Number of buckets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_numBuckets;
                    bool m_numBucketsHasBeenSet;

                    /**
                     * Whether it is compressed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_compressed;
                    bool m_compressedHasBeenSet;

                    /**
                     * Whether it has a subdirectory
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_storedAsSubDirectories;
                    bool m_storedAsSubDirectoriesHasBeenSet;

                    /**
                     * Serialization lib
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serdeLib;
                    bool m_serdeLibHasBeenSet;

                    /**
                     * Serialization name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serdeName;
                    bool m_serdeNameHasBeenSet;

                    /**
                     * Bucket name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_bucketCols;
                    bool m_bucketColsHasBeenSet;

                    /**
                     * Serialization parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KVPair> m_serdeParams;
                    bool m_serdeParamsHasBeenSet;

                    /**
                     * Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KVPair> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Column sorting (Expired)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DMSColumnOrder m_sortCols;
                    bool m_sortColsHasBeenSet;

                    /**
                     * Column
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DMSColumn> m_cols;
                    bool m_colsHasBeenSet;

                    /**
                     * Column sorting field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DMSColumnOrder> m_sortColumns;
                    bool m_sortColumnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DMSSDS_H_
